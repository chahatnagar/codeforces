#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min256 = min({a,c,d});
    a = a - min256;
    int min32 = min({a,b});
    int sum = (256*min256)+(32*min32);
    cout << sum;
}
int32_t main()
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