#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int x, n, m; cin >> x >> n >> m;
    if(x<=m*10){
    	cout << "YES";
    	return;
    }
    while(n){
    	x/=2;
    	x+=10;
    	n--;
    }
    while(m){
    	x-=10;
    	m--;
    }

    if(x<=0){
    	cout << "YES";
    	return;
    }
    cout << "NO";
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