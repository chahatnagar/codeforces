#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n), ans(n+1);
    for(int &i : v)
    {
    	cin >> i;
    }

    // for(int i = 0; i <= n; i++)
    // {
	int max_sum = 0, curr_sum = 0;

	for(int j = 0; j < n; j++)
	{
		curr_sum+=v[j];
		max_sum = max(max_sum, curr_sum);
		if(curr_sum<0) curr_sum = 0;
	}

	cout << max_sum;
    // }
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