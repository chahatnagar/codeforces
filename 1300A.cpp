#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n; cin >> n;
    int sum = 0, countz = 0;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1; 
    	if(n1==0) countz++;
    	sum+=n1;
    }
    if(sum!=0 && countz==0){
    	cout << 0;
    	return;
    }
    else if(sum==0 && countz==0){
    	cout << 1;
    	return;
    }
    if(countz>0){
    	while(countz+sum==0){
    		countz++;
    	}
    }

    cout << countz;

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