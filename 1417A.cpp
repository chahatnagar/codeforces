#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int &i:arr) cin >> i;
    int ans = 0;
	int min1 = INT_MAX, in;
    for(int i = 0; i < n; i++){
    	if(arr[i]<min1){
    		min1 = arr[i];
    		in = i;
    	}
    }
    // cout << min1 << " " << in << " ";
	for(int i = 0; i < n; i++){
		if(i != in){
			ans += (k-arr[i])/min1;
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