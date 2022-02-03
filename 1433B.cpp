#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1(n);
    int one = 0;
    int ans = 0;
    int temp_ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	
    	int x; cin >> x;
    	if(x==1 && one == 0){
    		one = 1;
    	}
    	if(x==0 && one==1){
    		temp_ans++;
    	}
    	if(x==1 && one == 1){
    		ans+=temp_ans;
    		temp_ans = 0;
    		one = 1;
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