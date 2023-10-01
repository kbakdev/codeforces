#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numOfProblems;
        long long maxDiff;
        cin >> numOfProblems >> maxDiff;

        vector<long long> difficulties(numOfProblems);

        for (int i = 0; i < numOfProblems; i++) {
            cin >> difficulties[i];
        }

        sort(difficulties.begin(), difficulties.end());

        int problemsToRemove = 0, windowStart = 0;
        for (int i = 1; i < numOfProblems; i++) {
            while (difficulties[i] - difficulties[windowStart] > maxDiff) {
                windowStart++;
            }
            problemsToRemove = max(problemsToRemove, i - windowStart);
        }

        cout << numOfProblems - problemsToRemove - 1 << "\n";
    }

    return 0;
}
