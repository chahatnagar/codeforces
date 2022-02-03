#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    int num; cin >> num;
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
    	int n1; cin >> n1;
    	int a = min(n1,num);
    	int b = max(n1, num);
    	while(a*2<b){
    		a*=2;
    		ans++;
    	}
    	num = n1;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}