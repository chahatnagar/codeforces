#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v1(n);
    for(auto &i:v1){
    	cin >> i;
    }
    int ans = 0;
    sort(v1.begin(), v1.end());
    
    int lp = 0, rp = n-1;
    while(lp<=rp){
    	if(abs(v1[lp])<abs(v1[rp]) && v1[lp+k]<=v1[lp]){
    		ans+=(abs(v1[lp])*2);
    		lp+=k;
    	}
    	if(abs(v1[lp])>abs(v1[rp]) && v1[rp+k]<=v1[rp]){
    		ans+=(abs(v1[rp])*2);
    		rp-=k;
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