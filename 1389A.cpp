#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, m;
    cin >> n >> m;
    // int N = n;
    // while(m%n){
    // 	n++;
    // }
    // if(n==m){
    // 	while(m%N){
    // 		m--;
    // 	}
    // 	if(N==m){
    // 		cout << -1 << " " << -1;
    // 		return;
    // 	}
    // 	cout << N << " " << m;
    // 	return;
    // }
    if(n==((m/n)*n)){
    	cout << -1 << " " << -1;
    	return;
    }
    cout << n << " " << (m/n)*n;
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