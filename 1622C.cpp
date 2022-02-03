#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n), sums(n+1);
    for(int &i:v){
    	cin >> i;
    }

    sort(v.begin(), v.end());
	sums[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        sums[i] = sums[i-1] + v[i-1];
    }
    int ans = 2e18;
    for (int i = 0; i < n; ++i)
    {
        int x = sums[n-i]+(i*v[0]);
        int y = i;
        if(x>k){
            x-=k;
            y += (x+i)/(i+1);
        }
        ans = min(ans, y);
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}	