#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int s, v1, v2, t1, t2; cin >> s >> v1 >> v2 >> t1 >> t2;
    if((s*v1)+2*t1<(s*v2)+2*t2) cout << "First";
    else if((s*v1)+2*t1>(s*v2)+2*t2) cout << "Second";
    else cout << "Friendship";

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