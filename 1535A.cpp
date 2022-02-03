#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int win1 = max(a,b);
    int win2 = max(c,d);
    int los1 = min(a,b);
    int los2 = min(c,d);
    int final_loser = min(win1, win2);
    if(final_loser<los1 || final_loser<los2){
    	cout << "NO";
    	return;
    }
    cout << "YES";

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