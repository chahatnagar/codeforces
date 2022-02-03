#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    vector<int> r;
    r.push_back(0);
    for(int i = 0; i < s.size(); i++)
    {
    	if(s[i]=='R') r.push_back(i+1);
    }
    r.push_back(s.size()+1);
    int ans = INT_MIN;
    for(int i = 0; i < r.size()-1; i++){
    	ans = max(ans, abs(r[i]-r[i+1]));
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