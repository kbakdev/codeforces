def snowflake_graph(t, test_cases):
    results = []
    for i in range(t):
        n, m, edges = test_cases[i]
        degrees = [0] * (n + 1)

        for u, v in edges:
            degrees[u] += 1
            degrees[v] += 1

        central_vertex = degrees.index(max(degrees))
        x = degrees[central_vertex]
        y = 0
        for u, v in edges:
            if u == central_vertex or v == central_vertex:
                other_vertex = u if u != central_vertex else v
                y += degrees[other_vertex] - 1

        results.append((x, y // x))
    return results


def main():
    t = int(input())
    test_cases = []
    for _ in range(t):
        n, m = map(int, input().split())
        edges = [tuple(map(int, input().split())) for _ in range(m)]
        test_cases.append((n, m, edges))

    results = snowflake_graph(t, test_cases)
    for x, y in results:
        print(x, y)


if __name__ == "__main__":
    main()
