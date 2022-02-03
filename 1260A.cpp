#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int c, sum, ans = 0; cin >> c >> sum;
    // cout << c-(sum%c) << " " << sum/c;
    for (int i = 0; i < c-(sum%c); ++i)
    {
    	ans+=(pow(sum/c,2));
    }

    for (int i = 0; i < sum%c; ++i)
    {
    	ans+=(pow((sum/c)+1, 2));
    }

    cout << ans;
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