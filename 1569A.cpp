#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    if(n==1){
    	cout << -1 << " " << -1;
    	return;
    }
    
    for (int i = 0; i < n-1; ++i)
    {
    	if(s[i]!=s[i+1]){
    		cout << i+1 << " " << i+2;
    		return;
    	}
    }

    cout << -1 << " " << -1;
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