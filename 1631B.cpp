#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int ctr = n-2, ans = 0;
    for(int i = 0; i < n; i++) cin >> v[i];
    while(ctr>=0){
    	if(v[ctr]!=v[n-1]){
    		ans++;
    		ctr = ctr*2;
    		ctr -= (n-1);
    	}else{
    		ctr--;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}