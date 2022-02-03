#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    char key2 = (k%2) ? 'L' : 'R';
    cout << (((k-1)/2)/m)+1<< " ";
    cout << (((k-1)/2)%m)+1<< " ";
    cout << key2;
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