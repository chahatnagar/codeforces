#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int xa, ya, xb, yb, xf, yf; cin >> xa >> ya >> xb >> yb >> xf >> yf;
    if(xa==xb && xb==xf && min(ya,yb)<yf && max(ya,yb)>yf){
    	cout << abs(ya-yb)+2;
    	return;
    }
    if(ya==yb && yb==yf && min(xa,xb)<xf && max(xa,xb)>xf){
    	cout << abs(xa-xb)+2;
    	return;
    }
    cout << abs(xa-xb)+abs(ya-yb);

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