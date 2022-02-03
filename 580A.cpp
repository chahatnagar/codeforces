#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int prev; cin >> prev;
    int count = 1;
    int ans = 1;
    for(int i = 1; i < n; i++){
    	int n1; cin >> n1;
    	// cout << n1 << " " << prev << " " << count << endl;
    	if(n1>=prev) count++;
    	else{
    		count = 1;
    	}
    	prev = n1;
    	ans = max(count, ans);
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
    solve();
    return 0;
}