#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> home(n), guest(n);
    
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && home[i] == guest[j]) {
                res++;
            }
        }
    }
    
    cout << res << endl;
    return 0;
}

