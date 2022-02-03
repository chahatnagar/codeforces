#include <bits/stdc++.h>
#define int long long 
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2;
        return;
    }else{
        cout << -1*(n+1)/2;
        return;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}