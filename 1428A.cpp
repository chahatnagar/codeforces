#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    if(abs(y1-y2)==0){
    	cout << abs(x1-x2);
    	return;
    }
    if(abs(x1-x2)==0){
    	cout << abs(y1-y2);
    	return;
    }

    cout << abs(x1-x2)+abs(y1-y2)+2;
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