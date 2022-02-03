#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    map<string, int> m;
    for (int i = 0; i < s.size()-1; ++i)
    {
    	string sub = "";
    	sub+=s[i];
    	sub+=s[i+1];
    	// cout << sub << endl;
    	if(sub=="00" && m["11"]>=1){
    		cout << "NO";
    		return;
    	}else{
    		m[sub]++;
    	}
    }
    cout << "YES";
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