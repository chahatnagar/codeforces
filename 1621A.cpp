#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    int r = 0, c = 0;
    int count = 0;
    if(k<=((n+1)/2)){
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			if(i==r && j==c && count<k){
    				cout << 'R';
    				r+=2;
    				c+=2;
    				count++;
    			}
    			else cout << '.';
    		}
    		cout << endl;
    	}
    }else{ cout << -1 << endl;}
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
    }
    return 0;
}