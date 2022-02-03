#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    if(n==0 && m>0){
    	cout << "Impossible";
    	return;
    }
    if(m==0){
    	cout << n << " " << n;
    	return;
    }
    cout << n+((m>n) ? m-n : 0) << " " << n+(m-1);
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