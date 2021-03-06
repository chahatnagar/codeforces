#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int l, r;
    cin >> l >> r;
    map<int, int> m;
    for (int i = l; i <= r; ++i)
    {
        for(int j = 0; j <= 18; j++)
        {
            if((1 << j) & i)
            {
                m[j]++;
            }
        }
    }

    int ans = INT_MAX;

    for(auto i : m)
    {
        ans = min(ans, r-l+1-i.second);
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