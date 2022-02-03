#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int x, y; cin >> x >> y;
    if((x+y)%2){
    	cout << -1 << " " << -1;
    	return;
    }
    if(x==0 && y==0){
    	cout << 0 << " " << 0;
    	return;
    }if(x==0 || y==0){
    	cout << x/2 << " " << y/2;
    	return;
    }
    if((x+y)%2){
    	cout << -1 << " " << -1;
    	return;
    }
    int dist = (x+y)/2;
    for (int i = 1; i <= dist; ++i)
    {
    	if(abs(x-i)+abs(y-abs(dist-i))==dist){
    		cout << i << " " << abs(dist-i);
    		return;
    	}
    }
    cout << -1 << " " << -1;

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