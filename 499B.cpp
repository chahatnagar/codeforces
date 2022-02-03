#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    map<string, string> m1;
    for (int i = 0; i < m; ++i)
    {
    	string fl, sl; cin >> fl >> sl;
    	m1[fl] = sl;
    }
   	for (int i = 0; i < n; ++i)
   	{
   		string pn; cin >> pn;
   		string ans = (pn.size()<=m1[pn].size()) ? pn : m1[pn];
		cout << ans << " ";
   	}
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