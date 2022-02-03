#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, x; cin >> n >> x;
    int ans = 0;
    if(x<=n) ans++;
    for (int i = 2; i <= n; ++i)
    {
    	if(!(x%i) && (x/i)<=n) {
    		ans++;
    	}
    }
    cout << ans;

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
    solve();
    return 0;
}