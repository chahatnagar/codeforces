#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for(int &i:v) cin >> i;
    if(n==1){
    	cout << 0;
    	return;
    }
    sort(v.begin(), v.end());
	int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	if((v[i]-v[0])%k==0){
    		ans+=v[i]-v[0];
    	}else{
    		cout << -1;
    		return;
    	}
    }
    cout << ans/k;
    
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