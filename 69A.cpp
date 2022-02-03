#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x1, y1, z1; cin >> x1 >> y1 >> z1;
    	x+=x1;
    	z+=z1;
    	y+=y1;
    }
    if(x==0 && y == 0 && z==0) cout << "YES";
    else cout << "NO";
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