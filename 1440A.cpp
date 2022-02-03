#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, co, c1, h; cin >> n >> co >> c1 >> h;
    int zc = 0, oc = 0;
    string s; cin >> s;
    for(char c:s){
    	if(c=='0') zc++;
    	if(c=='1') oc++;
    }
    int tc1 = (n*co)+oc*h;
    int tc2 = (n*c1)+zc*h;
    int tc3 = (zc*co)+(oc*c1);

    int ans = min({tc1, tc2, tc3});

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