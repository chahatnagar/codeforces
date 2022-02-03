#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    map<pair<int, int>, int> mpair;
    for(int i = 0; i < n; i++) {
    	int x; cin >> x;
    	v[i] = x;
    	m[x]++;
    }
    sort(v.begin(), v.end());
    int counter = 0;
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		if(i!=j){
    			if(m[v[i]%v[j]]<1 || m[v[j]%v[i]]<1){
    				if(mpair[{v[i], v[j]}]==0 && mpair[{v[j], v[i]}]==0){
    					if(counter<floor(n/2)){
    						cout << v[j] << " " << v[i] << endl;
	    					mpair[{v[i], v[j]}]++;
	    					mpair[{v[j], v[i]}]++;
	    					counter++;
    					}else{
    						return;
    					}
    					
    				}
    			}

    		}
    	}
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
    }
    return 0;
}