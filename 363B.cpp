#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for(int &i : v) cin >> i;
    int sum = 0, index = 0;
    for (int i = 0; i < k; ++i)
    {
    	sum+=v[i];
    }
    int ans = sum, f = 0, l = k;
    // cout << sum << " ";
    for (int i = 1; i <= n-k; i++)
    {
    	sum-=v[f];
    	sum+=v[l];
    	if(ans>sum){
    		ans = sum;
    		index = i;
    	}
    	// cout << sum << " ";
    	f++, l++;
    }
    cout << index+1;
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