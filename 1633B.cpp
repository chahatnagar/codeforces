#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    int o = 0, z = 0;
    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i]=='1') o++;
    	else z++;
    }
    if(z==o)
    {
    	cout << z-1;
    	return;
    }
    cout << min(z,o);

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