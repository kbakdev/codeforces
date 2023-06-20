#include<bits/stdc++.h>
using namespace std;

#define ll long long
typedef pair<ll,string> pls;

struct cmp {
    bool operator()(pls a, pls b) {
        if(a.first != b.first)
            return a.first > b.first;
        return a.second > b.second;
    }
};

void solve() {
    ll A, B, C, K;
    cin >> A >> B >> C >> K;
    
    ll a = 1, b = 1, c = 10;
    for(int i=1; i<A; i++)
        a *= 10;
    for(int i=1; i<B; i++)
        b *= 10;
    for(int i=1; i<C; i++)
        c *= 10;
        
    priority_queue<pls, vector<pls>, cmp> pq;
    
    for(int i=1; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(a*i+b*j<c && a*i+b*j>=a)
                pq.push({a*i+b*j, to_string(a*i)+" + "+to_string(b*j)+" = "+to_string(a*i+b*j)});
            if(b*i+a*j<c && b*i+a*j>=b)
                pq.push({b*i+a*j, to_string(b*i)+" + "+to_string(a*j)+" = "+to_string(b*i+a*j)});
        }
    }
    
    while(K > 1 && !pq.empty()) {
        pq.pop();
        K--;
    }
    
    if(pq.empty())
        cout << -1 << "\n";
    else
        cout << pq.top().second << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while(T--)
        solve();

    return 0;
}
