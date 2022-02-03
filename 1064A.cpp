#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
	if(a+b<=c){
		ans+=((c-(a+b))+1);
	}
	if(a+c<=b){
		ans+=((b-(a+c))+1);
	}
	if(b+c<=a){
		ans+=((a-(b+c))+1);
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