#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> Pair;

const int maxNodes = 8e5 + 6;

vector<ll> graph[maxNodes], treeSize(maxNodes, 0);

// Checks if a value is valid
bool isValid(int mid, ll target) {
    return ((mid - 1) * mid) / 2 >= target;
}

// Traverses the tree to count the number of nodes in each subtree
void dfs(ll node, ll parent = -1) {
    if(graph[node].size() == 1 && node != 1) 
        treeSize[node] = 1;

    for (auto childNode : graph[node]) {
        if (childNode != parent) {
            dfs(childNode, node);
            treeSize[node] += treeSize[childNode];
        }
    }
}

void testCase() {
    ll nodes, queries, node1, node2;
    cin >> nodes;
    
    // Clearing the previous test case data
    for (int i = 1; i <= nodes; i++) {
        graph[i].clear();
        treeSize[i] = 0;
    }

    // Building the tree from edges
    for (int i = 1; i < nodes; i++) {
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    // Pre-processing the tree to find subtree sizes
    dfs(1);

    cin >> queries;
    while (queries--) {
        cin >> node1 >> node2;
        cout << treeSize[node1] * treeSize[node2] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int testCases;
    cin >> testCases;

    while (testCases--) {
        testCase();
    }

    return 0;
}
