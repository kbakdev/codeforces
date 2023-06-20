#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    cin >> word;

    bool isFirstLowercase = true;
    if (isupper(word[0])) {
        isFirstLowercase = false;
    }

    bool isRestUppercase = true;

    for (int i = 1; i < word.size(); ++i) {
        if (islower(word[i])) {
            isRestUppercase = false;
            break;
        }
    }

    if (isRestUppercase == true & isFirstLowercase == true) {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); ++i) {
            word[i] = tolower(word[i]);
        }
    }
    if (isRestUppercase == true & isFirstLowercase == false) {
        for (int i = 0; i < word.size(); ++i) {
            word[i] = tolower(word[i]);
        }
    }

    cout << word << endl;

    return 0;
}