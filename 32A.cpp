#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, d; cin >> n >> d;
    int ans = 0;
    int arr[n];
    for(int &i:arr){
    	cin >> i;
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		if(j!=i && abs(arr[i]-arr[j])<=d){
    			ans++;
    		}
    	}
    }
    cout << ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    solve();
    return 0;
}