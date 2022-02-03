#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n);
   
    
    int max1 = INT_MIN;
    for(auto &i:v1){
    	cin >> i;
    	max1 = max(i, max1);
    }
    
    int ans = 0;
    int x = v1[n-1];

    for(int i = n-1; i >= 0; i--){
    	if(v1[i]>x){
    		ans++;
    		x = v1[i];
    	}
    }

    cout << ans;
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