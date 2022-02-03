#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a,b;
    cin >> a >> b;
    int min1 = min(a,b);
    int fact=1;
    for (int i = 2; i <= min1; ++i)
    {
    	fact*=i;
    }
    cout << fact;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}