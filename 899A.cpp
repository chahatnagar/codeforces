#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int oc = 0, tc = 0;
    for(int i = 0; i < n; i++){
    	int n1; cin >> n1;
    	if(n1==1) oc++;
    	if(n1==2) tc++;
    }
    if(oc==0){
    	cout << 0;
    	return;
    }
    if(tc==0){
    	cout << oc/3;
    	return;
    }
    int ans = 0;
    while(tc>=1 && oc>=1){
    	ans += 1;
    	tc--;
    	oc--;
    }
    ans += oc/3;
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