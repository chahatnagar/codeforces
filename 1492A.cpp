#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int p, a, b, c; cin >> p >> a >> b >> c;
    cout << min({(((p/a)*a)+(p%a?a:0))-p, (((p/b)*b)+(p%b?b:0))-p, (((p/c)*c)+(p%c?c:0))-p});
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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