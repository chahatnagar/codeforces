#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    map<int, pair<int, int>> m;
    map<int, int> m2;
    int lowest = INT_MAX, highest = INT_MIN;
    int lowest_cost = INT_MAX, highest_cost = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
    	int l, r, c; cin >> l >> r >> c;
    	if(l<=lowest){
    		if(l==lowest) lowest_cost = min(lowest_cost, c);
    		lowest = l;
    		lowest_cost = c;
    	}
    	if(r>=highest){
    		if(r==highest) highest_cost = min(highest_cost, c);
    		highest = r;
    		highest_cost = c;
    	}
    	m[c] = {l,r};
    	m2[c] = (r-l)+1;
    	if(i==0){
    		cout << c;
    	}else{
    		// if(lowest_cost==highest_cost){
    		// 	cout << lowest_cost;
    		// }else{
    		// 	cout << highest;
    		// }
    		if(lowest_cost==highest_cost){
    			cout << lowest_cost;
    		}else{
    			if((m[lowest_cost].first==m[highest_cost].first) || m[lowest_cost].second==m[highest_cost].second){
    				if(abs(m[highest_cost].first-m[highest_cost].second)>abs(m[lowest_cost].first-m[lowest_cost].second)){
	    				cout << highest_cost;
	    			}else if(abs(m[highest_cost].first-m[highest_cost].second)<abs(m[lowest_cost].first-m[lowest_cost].second)){
	    				cout << lowest_cost;
	    			}else{
	    				cout << lowest_cost+highest_cost;
	    			}
    			}else{
    				cout << highest_cost+lowest_cost;
    			}
    		}
    	}

    	cout << endl;
    }



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