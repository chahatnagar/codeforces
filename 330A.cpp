#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int r,c;
    cin >> r >> c;
    char arr[r][c];
    // int scordx = INT_MIN;
    // int scordy = INT_MIN;
    for (int i = 1; i <= r; ++i)
    {
    	for (int j = 1; j <= c; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }
    set <int> r1;
    set <int> c1;

    for (int i = 1; i <= r; ++i)
    {
    	for (int j = 1; j <= c; ++j)
    	{
    		if(arr[i][j]=='S'){
    			r1.insert(i);
    			c1.insert(j);

    		}
    	}
    }

    cout << r*c - (r1.size()*c1.size());
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}