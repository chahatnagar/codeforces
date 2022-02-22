#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int x, y, k;
    cin >> x >> y >> k;
    int total_sticks = (k+(y*k))-1;

    int stick_steps = (total_sticks/(x-1)) + (total_sticks%(x-1) ? 1: 0);

    cout << stick_steps+k;
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