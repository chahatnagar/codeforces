#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    cout << min(n*a, (n/m)*b+min((n%m)*a, b));
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