#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    int ccount = 0;
    int rcount = 0;
    for (int i = 0; i < n; ++i)
    {
    	string s1; cin >> s1;
    	int t_rc = 0, t_cc = 0;
    	for (int j = 0; j < m; ++j)
    	{
    		if(s1[j]=='B'){
    			t_rc++;
    			break;
    		}

    	}
    	for (int j = 0; j < m; ++j)
    	{
    		if(s1[j]=='B' && t_rc){
    			ccount++;
    		}

    	}
    	rcount += t_rc;
    	ccount += t_cc;
    	
    }

    cout << ccount+rcount << " " << ccount/rcount;
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