#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (int i = 0; i < n-1; ++i)
    {
    	if(s[i]-48>0) ans+=(s[i]-47);
    }
    s[n-1] ? ans+=(s[n-1]-48) : 0;
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