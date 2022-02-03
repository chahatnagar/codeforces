#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(int &i:v) cin >> i;
    set<int> s;
    int ans = 2, count = 2;
    for (int i = 2; i < n; ++i)
    {
    	if(v[i]==v[i-1]+v[i-2]){
    		count++;
    		s.insert(count);
    		ans = max(count, ans);
    	}else{
    		count = 2;
    	}
    }
    if(n==1){
    	cout << 1;
    }else{
    	cout << ans;
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