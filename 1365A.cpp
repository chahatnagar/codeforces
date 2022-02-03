#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    bool r[n] = {0}, c[m] = {0};
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		int x; cin >> x;
    		if(x==1)
    		{
    			r[i] = 1;
    			c[j] = 1;
    		}
    	}
    }
    n = 0, m = 0;
    for(int i : r){
    	if(!(i)) n++;
    }
    for(int i : c){
    	if(!(i)) m++;
    }
    // cout << n << " " << m;
    cout << ((min(n,m)%2==0) ? "Vivek" : "Ashish");
    


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