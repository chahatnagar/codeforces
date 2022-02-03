#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int f = 1, e = pow(n,2);
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n/2; ++j)
    	{
    		cout << f << " ";
    		f++;
    	}
    	for (int j = 0; j < n/2; ++j)
    	{
    		cout << e << " ";
    		e--;
    	}
    	cout << endl;
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