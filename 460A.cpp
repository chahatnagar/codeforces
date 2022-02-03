#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    int ts = n;
    int dc = 1;
    while(ts){
    	// cout << ts << " ";
    	ts--;
    	if(dc%m==0){
    		ts+=1;
    	}
    	// cout << ts << endl;
    	dc++;
    }
    cout << dc-1;
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