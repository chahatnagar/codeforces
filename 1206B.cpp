#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int prod = 1;
    int ans = 0;
    int k = 0;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1==0) k++;
    	if(n1<0){
    		ans+=(-1-n1);
    		// cout << (-1-n1) << " ";
    		prod*=(-1);
    	}else if(n1>0){
    		ans+=abs(n1-1);
    		// cout << abs(n1-1) << " ";
    		prod*=(1);
    	}
    }
    // cout << k;
    if(k>0){
    	cout << ans+k;
    	return;
    }else if(prod==-1){
    	cout << ans+2;
    }else{
    	cout << ans;
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