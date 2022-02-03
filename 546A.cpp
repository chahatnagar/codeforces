#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
void solve(){
    int k, n, w;
    cin >> k >> n >> w;
    int total_price = k*((w*(w+1))/2);
    (n>total_price) ? cout << 0 : cout << total_price-n;
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