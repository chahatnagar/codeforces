#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    cout << ((n*n)/2)+((n*n)%2) << endl;
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		if((i+j)%2==0) cout << 'C';
    		else cout << '.';
    	}
    	cout << endl;
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
    solve();
    return 0;
}