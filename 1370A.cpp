#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    (n%2==0) ? cout << n/2 : cout << (n-1)/2;
}
int32_t	 main()
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