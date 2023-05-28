from collections import deque

def bfs(grid, visited, i, j, n, m):
    volume = 0
    queue = deque([(i, j)])
    visited[i][j] = True

    while queue:
        x, y = queue.popleft()
        volume += grid[x][y]

        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] > 0:
                visited[nx][ny] = True
                queue.append((nx, ny))

    return volume

def largest_lake_volume(grid, n, m):
    visited = [[False for _ in range(m)] for _ in range(n)]
    max_volume = 0

    for i in range(n):
        for j in range(m):
            if not visited[i][j] and grid[i][j] > 0:
                max_volume = max(max_volume, bfs(grid, visited, i, j, n, m))

    return max_volume

def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        grid = [list(map(int, input().split())) for _ in range(n)]
        print(largest_lake_volume(grid, n, m))

if __name__ == "__main__":
    main()
