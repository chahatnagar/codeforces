#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < k; ++i)
    {
    	cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0, val = 0;
    for (int i = 0; i < k; i++)
    {
    	
    	if(v[i]<=val){
    		cout << v[i] << "," << val << " ";
    		break;
    	}
    	// cout << v[i] << "," << val << " ";
    	ans++, val+=(n-v[i]);
    	
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