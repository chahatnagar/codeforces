#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	int check = 0;
    	set<int> s;
    	while(x){
    		s.insert(x%10);
    		x/=10;
    	}
    	for(int i:s){
    		if(i==check && i<=k) check++;
    		else break;
    	}
    	if(check==k+1) ans++;
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