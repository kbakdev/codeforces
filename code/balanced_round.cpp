#include <bits/stdc++.h>
using namespace std;

int main() {
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

        int startIdx = 0;
        int longestBalancedSegment = 0;

        while (startIdx < numOfProblems) {
            int nextIdx = startIdx + 1;

            while (nextIdx < numOfProblems && difficulties[nextIdx] - difficulties[nextIdx - 1] <= maxDiff) {
                nextIdx++;
            }

            longestBalancedSegment = max(longestBalancedSegment, nextIdx - startIdx);
            
            startIdx = nextIdx;
        }

        cout << numOfProblems - longestBalancedSegment << endl;
    }

    return 0;
}
