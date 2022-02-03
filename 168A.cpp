#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, x, y; 
    cin >> n >> x >> y;
    cout << (((((n*y)/100)+(((n*y)%100)>0 ? 1 : 0))-x)<0 ? 0 : ((((n*y)/100)+(((n*y)%100)>0 ? 1 : 0))-x));
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