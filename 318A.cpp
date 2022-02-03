#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
void solve(){
    int n, k; cin >> n >> k;
    if(k<=n/2 || k==n){
    	cout << (2*k)-1;
    	return;
    }else{
    	cout << 2*((k)-((n/2)+(n%2)));
    	return;
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