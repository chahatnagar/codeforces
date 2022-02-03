#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k1, k2; cin >> n >> k1 >> k2;
    int wt, bt; cin >> wt >> bt;
    int w = k1+k2;
    int b = (n-k1)+(n-k2);
    
    // cout << "NO";
    (w/2>=wt && b/2>=bt) ? cout << "YES" : cout << "NO";
    
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