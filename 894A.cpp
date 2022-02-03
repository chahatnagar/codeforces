#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    string s; cin >> s;
    int ans = 0;
    int n = s.length();
    for (int i = 0; i < n; ++i)
    {
    	for (int j = i+1; j < n; ++j)
    	{
    		for (int k = j+1; k < n; ++k)
    		{
    			if(s[i]=='Q' && s[j]=='A' && s[k]=='Q'){
    				ans++;
    			}
    		}
    	}
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
    solve();
    return 0;
}