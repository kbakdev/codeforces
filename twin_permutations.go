package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Scan()
	t, _ := strconv.Atoi(scanner.Text())

	for i := 0; i < t; i++ {
		scanner.Scan()
		n, _ := strconv.Atoi(scanner.Text())

		scanner.Scan()
// 		a := scanner.Text()
// 		aList := strings.Fields(a)

		var b []int
		for j := 1; j <= n; j++ {
			b = append(b, j)
		}

		fmt.Println(strings.Trim(fmt.Sprint(b), "[]"))
	}
}
