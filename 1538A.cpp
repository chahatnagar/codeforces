#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, max1 = INT_MIN, min1 = INT_MAX, mini, maxi;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1>max1){
    		max1 = n1;
    		maxi = i;
    	}
    	if(n1<min1){
    		min1 = n1;
    		mini = i;
    	}
    }
    cout << min((min(mini,maxi)+(n-max(mini, maxi))+1), min(max(mini, maxi), n+1-min(mini,maxi)));
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