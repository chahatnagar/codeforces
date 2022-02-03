#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, v; cin >> n >> v;
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
    	int si; cin >> si;
    	for (int j = 0; j < si; ++j)
    	{
    		int p; cin >> p;
    		if(v>p) s.insert (i+1);
    	}
    }
    cout << s.size() << endl;
    for(auto i:s){
    	cout << i << " ";
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