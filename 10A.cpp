#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, p1, p2, p3, t1, t2; cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int ans = 0;
    int prev;
    for (int i = 0; i < n; i++)
    {
    	int l, r; cin >> l >> r;
    	ans+=(r-l)*p1;
    	// cout << ans << endl;
    	if(i!=0){
    		if(l-prev<=t1){
    			ans+=(l-prev)*p1;
    			// cout << ans << endl;
    		}else if(l-prev<=t1+t2){
    			ans+=(t1*p1)+(l-prev-t1)*p2;
    			// cout << ans << endl;
    		}else {
    			ans+=(t1*p1)+(t2*p2)+(l-prev-t1-t2)*p3;
    			// cout << ans << endl;
    		}
    	}
    	// cout << ans << endl;
    	prev = r;


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