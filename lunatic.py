import sys
from math import gcd
from typing import List

# B. Lunatic Never Content
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output
# You have an array a of n non-negative integers. Let's define f(a,x)=[a1modx,a2modx,…,anmodx] for some positive integer x. Find the biggest x, such that f(a,x) is a palindrome.
#
# Here, amodx is the remainder of the integer division of a by x.
#
# An array is a palindrome if it reads the same backward as forward. More formally, an array a of length n is a palindrome if for every i (1≤i≤n) ai=an−i+1.
#
# Input
# The first line contains a single integer t (1≤t≤105) — the number of test cases.
#
# The first line of each test case contains a single integer n (1≤n≤105).
#
# The second line of each test case contains n integers ai (0≤ai≤109).
#
# It's guaranteed that the sum of all n does not exceed 105.
#
# Output
# For each test case output the biggest x, such that f(a,x) is a palindrome. If x can be infinitely large, output 0 instead.
#
# Example
# inputCopy
# 4
# 2
# 1 2
# 8
# 3 0 1 2 0 3 2 1
# 1
# 0
# 3
# 100 1 1000000000
# outputCopy
# 1
# 2
# 0
# 999999900
# Note
# In the first example, f(a,x=1)=[0,0] which is a palindrome.
#
# In the second example, f(a,x=2)=[1,0,1,0,0,1,0,1] which is a palindrome.
#
# It can be proven that in the first two examples, no larger x satisfies the condition.
#
# In the third example, f(a,x)=[0] for any x, so we can choose it infinitely large, so the answer is 0.

import sys
from math import gcd
from typing import List
input = sys.stdin.readline

def is_palindrome(a: List[int]) -> bool:
    return a == a[::-1]

def find_gcd(a: List[int]) -> int:
    if len(a) == 1:
        return 0
    max_a = max(a)
    for x in range(max_a, 0, -1):
        f = [ai % x for ai in a]
        if is_palindrome(f):
            return x
    return 0

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    print(find_gcd(a))