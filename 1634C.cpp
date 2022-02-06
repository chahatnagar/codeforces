#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k;
    cin >> n >> k;
    int sum = n * k;
    if(k==1){
    	cout << "YES" << endl;
    	for(int i = 1; i <= n; ++i){
    		cout << i << endl;
    	}
    	return;
    }
    if(n%2 or (sum/2)%k){
    	cout << "NO" << endl;
    	return;
    }
    int x = 1, y = 2;
	cout << "YES" << endl;
    for(int i = 0; i < n / 2; ++i){
    	for(int j = 0; j < k; ++j, x = x+2){
    		cout << x << " ";
    	}
    	cout << endl;
    	for(int j = 0; j < k; ++j, y = y+2){
    		cout << y << " ";
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
    }
    return 0;
}