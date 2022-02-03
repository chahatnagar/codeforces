#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long double
void solve(){
    int n, l; cin >> n >> l; 
    vector<int> v(n);
    int maxdist = INT_MIN;
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

	for (int i = 0; i < n-1; ++i)
	{
		maxdist = max(maxdist, abs(v[i+1]-v[i]));
	}
	int ans = max({maxdist/2, v[0]-0, l-v[n-1]});
	cout << setprecision(17) << ans;
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