#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a, b, diff, same;
    cin >> a >> b;
    diff = min(a,b);
    same = max(a,b)-min(a,b);
    (same%2==0) ? same/=2 : same = (same-1)/2;
    cout << diff << " " << same;
}
int main()
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