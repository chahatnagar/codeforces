#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    double d, l, v1, v2; cin >> d >> l >> v1 >> v2;
    
    cout << setprecision(9) << ((l-d)/(v1+v2));
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