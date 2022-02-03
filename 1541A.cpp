#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    if(n%2==0){
    	for (int i = 1; i <= n; i+=2)
    	{
    		cout << i+1 << " " << i << " ";
    	}
    }
    if(n%2){
    	cout << 3 << " " << 1 << " " << 2 << " ";
    	for (int i = 4; i <= n; i+=2)
    	{
    		cout << i+1 << " " << i << " ";
    	}
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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