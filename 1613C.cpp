#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, h; cin >> n >> h;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }
    int l = 1, r = h, k = h;
    while(l<=r){
    	int mid = (l+r)/2;
    	int sum = 0; 
    	for (int i = 0; i < n; ++i)
    	{
    		int curr = mid;
    		if(i<n-1){
    			int d = v[i+1]-v[i];
    			if(d<mid) curr = d;
    		}
    		sum+=curr;
    	}
    	if(sum>=h){
    		k = mid, r = mid-1;
    	}else l = mid+1;

    }
    cout << k;
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