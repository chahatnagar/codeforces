#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> v(n);
    int prev = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if(i!=0){
    		v[i] = {prev+1, prev+x};
    	}else{
    		v[i] = {1,x};
    	}
    	prev += x;
    }
    // for(auto i : v){
    // 	cout << i.first << " " << i.second << endl;
    // }
    
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i)
    {
    	int num; cin >> num;
    	int l = 0, r = n;
    	while(l<r){
    		int mid = (l+r)/2;
    		if(v[mid].first<=num && v[mid].second>=num){
    			cout << mid+1 << endl;
    			break;
    		}else if(num>v[mid].second){
    			l = mid+1;
    		}else{
    			r = mid-1;
    		}
    	}


    	// cout << v2[i] << " ";
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
    solve();
    return 0;
}