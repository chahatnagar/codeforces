#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int r, b, d;
    cin >> r >> b >> d;
    if(abs(r - b) <= d * min(r, b)){
        cout << "YES";
        return;
    }
    cout << "NO";

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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