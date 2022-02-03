#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    double m; cin >> n >> m;
    double min1;
    double a1, b1; cin >> a1 >> b1;
    min1 = a1/b1;
    for(int i = 1; i < n; i++){
    	double a, b; cin >> a >> b;
    	min1 = min(min1,a/b);
    }
    cout << fixed << setprecision(8) << min1*m;
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