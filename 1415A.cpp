#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, r, c; cin >> n >> m >> r >> c;
    int a1 = abs(n-r)+abs(m-c);
    int a2 = abs(1-r)+abs(1-c);
    int a3 = abs(n-r)+abs(1-c);
    int a4 = abs(1-r)+abs(m-c);
    cout << max({a1,a2,a3,a4});
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
    int t; cin >> t;
    while(t--){
    	solve();
    	cout << endl;
    }
    return 0;
}