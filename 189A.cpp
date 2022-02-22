#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int ans = INT_MIN;
    for (int i = 0; i <= 4000; ++i)
    {
    	for (int j = 0; j <= 4000; ++j)
    	{
    		float cz = (n - ((a*i)+(b*j)));

    		if(cz<0) break;

    		float z = cz/((float)c);
    		if(z == (int)z)
    		{
    			ans = max(ans, i+j+(int)z);
    		}
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