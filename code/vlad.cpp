void solve_de(){
    int n; cin >> n;
    vi a(n);
    for(auto &x:a) cin >> x;

    sort();
    int k = a[0];
    if(k%2){
    for(int i=1;i<n;i++){
        if(a[i]%2==0 && (a[i]-k)%2==0){
        cout <<"NO\n";
        return;
        }
    }
}
else {
for(int i=1;i<n;i++){
    if(a[i]%2 && (a[i]-k)%2){
    cout <<"NO\n";
    return;
    }
}
}
cout <<"YES\n";
}
