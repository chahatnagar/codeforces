#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    map<int, int> m1;
    int ans = 0;
    cout << ans;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	m1[n1]++;
    }
    for(auto i:m1){
    	for(auto j:m1){
    		if(j.first%i.first==0) m1.erase(j.first);
    	}
    	ans++;
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