#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n%m; i++){
    	cout << (n/m)+1 << " ";
    }
    for (int i = 0; i < (n-(((n/m)+1)*(n%m)))/(n/m); ++i)
    {
    	cout << (n/m) << " ";
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