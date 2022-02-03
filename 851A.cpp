#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k, t; cin >> n >> k >> t;
    int standing = 0;
    // for(int i = 1; i <= (n+k); i++){
    // 	if(i<k+1){
    // 		standing++;
    // 	}if(i>=k+1)
    // }
    if(t<k+1){
    	cout << t;
    	return;
    }else if(t>=k+1 && t<=n){
    	cout << k;
    	return;
    }else{
    	cout << (n+k)-t;
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