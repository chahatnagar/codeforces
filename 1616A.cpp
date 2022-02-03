#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    map<int, int> m1;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	n1 = (n1<0) ? n1*=-1 : n1;
    	m1[n1]++;
    }
    int ans = 0;
    for(auto i:m1){
    	if(i.second>=2 && i.first!=0){
    		ans+=2;
    	}
    	if(i.second==1 && i.first!=0) ans+=1;
    	if(i.first==0) ans+=1;
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