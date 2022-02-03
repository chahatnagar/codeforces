#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < 4; ++i)
    {
    	int a, b, c, d; cin >> a >> b >> c >> d;
    	if(min(a,b)+min(c,d)<=n){
    		cout << i+1 << " " << min(a,b) << " " << n-min(a,b);
    		return;
    	}
    }
    cout << -1;
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