#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v1(n), v2(n);
    vector<pair<int, int>> p;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	v1[i] = x;
    }
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	v2[i] = x;
    }

    for (int i = 0; i < n; ++i)
    {
    	p.push_back({v1[i], v2[i]});
    }
    int ans = k;
    sort(p.begin(), p.end());
    for(auto i : p){
    	if(i.first<=ans){
    		ans+=i.second;
    	}else{
    		break;
    	}
    	// cout << i.first << " " << i.second << endl;
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