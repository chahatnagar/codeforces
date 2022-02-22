#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int ans(int n)
{
	return (n*(n-1))/2;
}
void solve(){
    int n, m;
    cin >> n >> m;

    cout << (n%m)*ans((n/m)+1)+(m - n%m)*(ans(n/m)) << " " << ans(n-m+1);
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