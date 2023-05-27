//B. Lunatic Never Content
//time limit per test2 seconds
//memory limit per test256 megabytes
//inputstandard input
//outputstandard output
//You have an array a of n non-negative integers. Let's define f(a,x)=[a1modx,a2modx,…,anmodx] for some positive integer x. Find the biggest x, such that f(a,x) is a palindrome.
//
//Here, amodx is the remainder of the integer division of a by x.
//
//An array is a palindrome if it reads the same backward as forward. More formally, an array a of length n is a palindrome if for every i (1≤i≤n) ai=an−i+1.
//
//Input
//The first line contains a single integer t (1≤t≤105) — the number of test cases.
//
//The first line of each test case contains a single integer n (1≤n≤105).
//
//The second line of each test case contains n integers ai (0≤ai≤109).
//
//It's guaranteed that the sum of all n does not exceed 105.
//
//Output
//For each test case output the biggest x, such that f(a,x) is a palindrome. If x can be infinitely large, output 0 instead.
//
//Example
//inputCopy
//4
//2
//1 2
//8
//3 0 1 2 0 3 2 1
//1
//0
//3
//100 1 1000000000
//outputCopy
//1
//2
//0
//999999900
//Note
//In the first example, f(a,x=1)=[0,0] which is a palindrome.
//
//In the second example, f(a,x=2)=[1,0,1,0,0,1,0,1] which is a palindrome.
//
//It can be proven that in the first two examples, no larger x satisfies the condition.
//
//In the third example, f(a,x)=[0] for any x, so we can choose it infinitely large, so the answer is 0.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

bool isPalindrome(vector<int> &a, int x) {
    vector<int> b(a.size());
    for (int i = 0; i < a.size(); ++i) {
        b[i] = a[i] % x;
    }
    for (int i = 0; i < b.size() / 2; ++i) {
        if (b[i] != b[b.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int ans = 0;
        for (int i = 1; i <= sqrt(a[0]); ++i) {
            if (a[0] % i == 0) {
                if (isPalindrome(a, i)) {
                    ans = max(ans, i);
                }
                if (isPalindrome(a, a[0] / i)) {
                    ans = max(ans, a[0] / i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

