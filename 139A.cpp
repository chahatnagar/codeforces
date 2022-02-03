#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(7);
    for (int i = 0; i < 7; ++i)
    {
    	cin >> v[i];
    }
    int sum = 0, i = -1;
    while(sum<n){
    	i++;
    	sum+=v[i];
    	// cout << sum << " ";
    	if(i==6){
    		i = -1;
    	}
    	
    }
    if(i==-1){
    	cout << 7;
    }else{
    	cout << i+1;
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