#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, j=1;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << j << " ";   
    }
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