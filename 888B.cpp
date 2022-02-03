#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    int l = 0, r = 0, d = 0, u = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]=='L') l++;
    	if(s[i]=='R') r++;
    	if(s[i]=='U') u++;
    	if(s[i]=='D') d++;
    }
    ans+=(min(l,r))*2;
    ans+=(min(u,d)*2);
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
    solve();
    return 0;
}