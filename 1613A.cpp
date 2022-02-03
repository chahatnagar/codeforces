#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int pow(int n){
	int ans = 10;
	for (int i = 0; i < n; ++i)
	{
		ans*=10;
	}
	return ans;
}
void solve(){
    int x1, p1, x2, p2; cin >> x1 >> p1 >> x2 >> p2;
    if(x1<x2 && p1<p2) cout << "<";
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