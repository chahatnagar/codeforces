#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n);
    for(auto &i:v1){
    	cin >> i;
    }

    int ans = 0;

    sort(v1.begin(), v1.end());

    for (int i = 0; i < n; i+=2)
    {
    	ans+=(v1[i+1]-v1[i]);
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