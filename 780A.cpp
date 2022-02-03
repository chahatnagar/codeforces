#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	map<int, int> m1;
	int t = 0;
	int ans = INT_MIN;
    int n; cin >> n;
    for(int i = 0; i < 2*n; i++){
    	int n1; cin >> n1;
    	if(m1[n1]==1){
    		m1[n1]++;
    		t--;
    	}else if(m1[n1]==0){
    		m1[n1]++;
    		t++;
    		ans = max(t,ans);
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
    solve();
    return 0;
}