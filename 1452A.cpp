#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int x, y; cin >> x >> y;
    int ans = 2*max(x,y)-1;
    if(x==y) ans++;
    cout << ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}