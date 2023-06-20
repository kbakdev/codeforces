#include <iostream>
#include <map>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::map<std::string, int> score;
    std::string team;
    
    for(int i=0; i<n; ++i){
        std::cin >> team;
        score[team]++;
    }

    std::string winner;
    int maxScore = 0;
    for(auto const& team : score){
        if(team.second > maxScore){
            maxScore = team.second;
            winner = team.first;
        }
    }

    std::cout << winner;
    
    return 0;
}
