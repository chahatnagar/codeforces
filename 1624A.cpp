#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int max1 = INT_MIN, min1 = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	max1 = max(x, max1);
    	min1 = min(x, min1);
    }
    cout << max1-min1;

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