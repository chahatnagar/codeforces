#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
unordered_map<int, int> m;
int go(int n, int a, int b, int c)
{
	  if(n==0)
	  {
	  	return 0;
	  }
	  if(n<0)
	  {
	  	return INT_MIN;
	  }
	  if(m.count(n))
	  {
	  	return m[n];
	  }
	  return m[n] = 1+max(go(n-a, a, b, c), max(go(n-b, a, b, c), go(n-c, a, b, c)));

}

// int bottom_up(int n, int a, int b, int c)
// {
// 	int dp[n+1];
// 	dp[0] = 0;
// 	for(int i = 1; i <= n; i++)
// 	{
// 		int r1 = INT_MIN, r2 = INT_MIN, r3 = INT_MIN;
// 		if(i>=a)
// 			r1 = dp[i-a];
// 		if(i>=b)
// 			r2 = dp[i-b];
// 		if(i>=c)
// 			r3 = dp[i-c];

// 		dp[i] = 1+max(r1, max(r2, r3));

// 	}

// 	return dp[n];
// }
void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << go(n, a, b, c);





















    //BruteForce Approach
    // int ans = INT_MIN;
    // for (int i = 0; i <= 4000; ++i)
    // {
    // 	for (int j = 0; j <= 4000; ++j)
    // 	{
    // 		float cz = (n - ((a*i)+(b*j)));

    // 		if(cz<0) break;

    // 		float z = cz/((float)c);
    // 		if(z == (int)z)
    // 		{
    // 			ans = max(ans, i+j+(int)z);
    // 		}
    // 	}
    // }

    // cout << ans;
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