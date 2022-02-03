#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
// const long long INF=1e18;
int dis[1005];
int mx = 0;
void once()
{
	dis[1] = 0;
	for (int i = 2; i < 1005; i++)
	{
		dis[i] = -1;
	}

	queue<int> q;
	q.push(1);

	while(!q.empty())
	{
		int cur = q.front();
		q.pop();
		for (int x = 1; x < 1005; x++)
		{
			int nex = cur + cur/x;
			if(nex>=1005) continue;
			int ndis = dis[cur] + 1;
			if(dis[nex] == (-1)){
				dis[nex] = ndis;
				q.push(nex);
			}
		}
	}

	for(int i = 1; i < 1005; i++)
	{
		mx = max(dis[i], mx);
	}
}
void solve(){
    int n, k; 
    cin >> n >> k;

    if(k > mx * n) k = mx * n;

    vector<int> b(n), v(n);
    vector<int> w(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> b[i];
    	w[i] = dis[b[i]];
    }

    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }

    vector<vector<int>> dp(n, vector<int>(k+1));

    dp[0][0] = 0;
    if(w[0] <= k)
    	dp[0][w[0]] = v[0];


    for (int i = 1; i < n; i++)
    {
    	for(int j = 0; j < k+1; j++)
    	{
    		dp[i][j] = dp[i-1][j];

    		if(j>=w[i])
    		{
    			dp[i][j] = max(v[i] + dp[i-1][j-w[i]], dp[i][j]);	
    		}
    	}
    }

    int ans = 0;

    for(int j = 0; j < k+1; j++)
    {
    	ans = max(ans, dp[n-1][j]);
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
    once();
    int t;
    cin >> t;
    while(t--)
    {
    	solve();
    	cout << endl;
    }

    return 0;
}