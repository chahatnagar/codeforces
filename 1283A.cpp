#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a,b;
    cin >> a >> b;
    cout << ((23-a)*60)+(60-b);
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