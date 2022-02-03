#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, a; cin >> n >> m >> a;
    int n1 = 0, m1 = 0;
    if(n%a){
    	n1 = 1;
    }
    if(m%a){
    	m1 = 1;
    }
    cout << ((n/a)+n1)*((m/a)+m1);
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