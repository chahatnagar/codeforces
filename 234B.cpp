#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	m[x] = i+1;
    }
    int c = (n-k)+1, it = 1;
    // cout << c << " ";
    vector<int> ans;
    for(auto i : m){
    	cout << i.first << " " << i.second << endl;
    	if(it==c){
    		cout << i.first << endl;
    	}
    	if(it>=c){
    		// ans.push_back(i.second);
    		cout << i.second << " ";
    	}
    	it++;
    }
    // cout << ans.size();
    // sort(ans.begin(), ans.end());
    // for(auto i : ans){
    // 	cout << i << " ";
    // }


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