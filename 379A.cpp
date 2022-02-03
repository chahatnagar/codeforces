#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	int ans = 0;
    int a, b; cin >> a >> b;
    ans = a;
    while(a/b){
    	ans+=(a/b);
    	a = (a/b)+(a%b);
    }
    cout << ans;
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