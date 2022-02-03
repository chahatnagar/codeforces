#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, rb, cb, rd, cd; 
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int ans = 0;
    int dr = 1, dc = 1;
   	while(rb!=rd && cb!=cd){
   		if(rb==n){
   			dr = -1;
   		}
   		if(cb==m){
   			dc = -1;
   		}
   		// cout << rb << "," << cb << " ";

   		rb+=dr;
   		cb+=dc;
   		ans++;
   		
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