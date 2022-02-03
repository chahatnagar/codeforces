#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n; cin >> n;
    int min1 = INT_MAX, max1 = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	max1 = max(max1, n1);
    	min1 = min(min1, n1);
    }

    cout << (max1-min1)-n+1;
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