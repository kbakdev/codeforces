#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> dist(2 * max(n, m) + 1, INT_MAX);
    dist[n] = 0;
    queue<int> q;
    q.push(n);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        if(v < m && dist[2*v] == INT_MAX) {
            q.push(2*v);
            dist[2*v] = dist[v] + 1;
        }
        if(v > 1 && dist[v-1] == INT_MAX) {
            q.push(v-1);
            dist[v-1] = dist[v] + 1;
        }
    }
    cout << dist[m] << endl;
    return 0;
}

