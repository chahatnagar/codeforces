#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m1, x, y; cin >> n >> m1 >> x >> y;
    vector<vector<char>> v(n, vector<char> (m1));
    map<string, int> m;
    map<string, int> mpair;
    int two = 0, one = 0;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m1; ++j)
    	{
    		cin >> v[i][j];
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m1; ++j)
    	{
    		if(j!=m1-1){
    			if(v[i][j]=='.' && v[i][j+1]=='.' && m[to_string(i)+'+'+to_string(j)]<1 && m[to_string(i)+'+'+to_string(j+1)]<1) {
    				two++;
    				m[to_string(i)+'+'+to_string(j)]++;
    				m[to_string(i)+'+'+to_string(j+1)]++;
    				mpair[to_string(i)+'+'+to_string(j)+','+to_string(i)+'+'+to_string(j+1)]++;
    			}
    		}
    		if(v[i][j]=='.' && m[to_string(i)+'+'+to_string(j)]<1){
    			one++;
    			m[to_string(i)+'+'+to_string(j)]++;
    			mpair[to_string(i)+'+'+to_string(j)]++;
    		}
    	}
    	
    }
    cout << min((two*y)+(one*x), ((two*2)+one)*x);
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}