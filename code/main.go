package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
	"strconv"
)

func isPalindrome(a []int) bool {
	for i, j := 0, len(a)-1; i < j; i, j = i+1, j-1 {
		if a[i] != a[j] {
			return false
		}
	}
	return true
}

func solve(a []int, x int) bool {
	b := make([]int, len(a))
	for i := 0; i < len(a); i++ {
		b[i] = a[i] % x
	}
	sort.Ints(b)
	return isPalindrome(b)
}

func main() {
	sc := bufio.NewScanner(os.Stdin)
	sc.Split(bufio.ScanWords)
	sc.Scan()
	t, _ := strconv.Atoi(sc.Text())
	for ; t > 0; t-- {
		sc.Scan()
		n, _ := strconv.Atoi(sc.Text())
		a := make([]int, n)
		max := -1
		for i := 0; i < n; i++ {
			sc.Scan()
			a[i], _ = strconv.Atoi(sc.Text())
			if a[i] > max {
				max = a[i]
			}
		}
		l, r := 1, max
		res := 0
		for l <= r {
			x := l + (r-l)/2
			if solve(a, x) {
				res = x
				l = x + 1
			} else {
				r = x - 1
			}
		}
		fmt.Println(res)
	}
}
