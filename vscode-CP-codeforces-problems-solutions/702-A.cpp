#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int counter = 1;
    int max_length = 1;
    
    for(int i = 1; i < n; i++) {
        if(a[i] > a[i-1]) 
            counter++;
        else
            counter = 1;
        
        max_length = max(max_length, counter);
    }
    
    cout << max_length;
    
    return 0;
}
