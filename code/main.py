import requests
import datetime
import configparser

def getUserInfo(username):
    try:
        req = requests.get(
            "https://codeforces.com/api/user.info?handles=" + username)

        data = req.json()

        if data["status"] == "OK":

            organization = ""

            if "organization" in data["result"][0]:
                organization = data["result"][0]["organization"]
            else:
                organization = "none"

            return {
                "handle": data["result"][0]["handle"],
                "rating": str(data["result"][0]["rating"]),
                "maxRating": str(data["result"][0]["maxRating"]),
                "contribution": str(data["result"][0]["contribution"]),
                "rank": data["result"][0]["rank"],
                "maxRank": data["result"][0]["maxRank"],
                "registrationTimeSeconds": datetime.datetime.utcfromtimestamp(
                    data["result"][0]["registrationTimeSeconds"]).strftime('%Y'),
                "organization": organization,
                "avatar": data["result"][0]["avatar"]

            }

    except Exception as error:
        print(error)

def getSubmissions(username):
    apiUrl = "https://codeforces.com/api/user.status"
    parameters = {"handle": username}
    submissions = []

    try:
        req = requests.get(url=apiUrl, params=parameters)
        data = req.json()

        if data['status'] == 'OK':
            demo = data['result']
            rating = " "
            contest_id = " "

            for i in range(len(demo)):

                if "rating" in demo[i]["problem"]:
                    rating = demo[i]["problem"]["rating"]
                else:
                    rating = "undefined"

                if "contestId" in demo[i]["problem"]:
                    contest_id = str(demo[i]["problem"]["contestId"])
                else:
                    rating = "undefined"

                if demo[i]["verdict"] == 'OK':
                    submissions.append({
                        "problem_name": demo[i]["problem"]["name"],
                        "index": demo[i]["problem"]["index"],
                        "submission_id": str(demo[i]["id"]),
                        "contest_id": str(contest_id),
                        "problem_link": "https://codeforces.com/contest/" + contest_id + "/problem/" +
                                        demo[i]["problem"]["index"],
                        "solution_link": "https://codeforces.com/contest/" + contest_id + "/submission/" + str(
                            demo[i]["id"]),
                        "rating": str(rating),
                        "tags": ', '.join([str(elem) for elem in (demo[i]["problem"]["tags"])]),
                        "programmingLanguage": demo[i]["programmingLanguage"],
                        "submission_time": datetime.datetime.utcfromtimestamp(
                            demo[i]["creationTimeSeconds"]).strftime('%d %B %Y %H:%M:%S'),
                    })

            unique_submissions = list(
                {v['problem_name']: v for v in submissions}.values())

            return unique_submissions

    except requests.exceptions.RequestException as error:
        print(error)


def to_md(user_info, submissions):
    md = f"# User Info\n"
    md += f"- Handle: {user_info['handle']}\n"
    md += f"- Rating: {user_info['rating']}\n"
    md += f"- Max Rating: {user_info['maxRating']}\n"
    md += f"- Contribution: {user_info['contribution']}\n"
    md += f"- Rank: {user_info['rank']}\n"
    md += f"- Max Rank: {user_info['maxRank']}\n"
    md += f"- Registration Year: {user_info['registrationTimeSeconds']}\n"
    md += f"- Organization: {user_info['organization']}\n"

    md += "\n# Submissions\n"
    md += "| Problem Name | Index | Submission ID | Contest ID | Solution Link | Rating | Tags | Programming Language | Submission Time |\n"
    md += "|--------------|-------|---------------|------------|---------------|--------|------|---------------------|-----------------|\n"
    for submission in submissions:
        md += f"| [{submission['problem_name']}]({submission['problem_link']}) | {submission['index']} | {submission['submission_id']} | {submission['contest_id']} | [{submission['submission_id']}]({submission['solution_link']}) | {submission['rating']} | {submission['tags']} | {submission['programmingLanguage']} | {submission['submission_time']} |\n"

    return md


if __name__ == "__main__":
    config = configparser.ConfigParser()
    config.read('config.ini')
    username = config['User']['username']

    user_info = getUserInfo(username)
    submissions = getSubmissions(username)

    md = to_md(user_info, submissions)

    with open('README.md', 'w') as f:
        f.write(md)

    print("README.md has been updated!")

