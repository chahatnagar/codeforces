#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	int a, b, n, s; cin >> a >> b >> n >> s;
    if(s%n>b){
    	cout << "NO";
    }else if(a*n+b>=s){
    	cout << "YES";
    }else{
    	cout << "NO";
    }
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