#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int m,n;
    cin >> m >> n;
    cout << (m*n)/2;
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