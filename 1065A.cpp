#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int s, a, b, c; cin >> s >> a >> b >> c;
    if(s<a*c){
    	cout << s/c;
    	return;
    }
    int ans = 0;
    ans += (s/(a*c))*a;
    ans += (s/(a*c))*b;
    s -= (s/(a*c))*(a*c);
    ans += (s/c);
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