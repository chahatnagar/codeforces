#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
  	if(n==1){
  		cout << 1;
  		return;
  	}
    int min1 = INT_MAX, count = 0, ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if(x==min1){
    		count++;
    	}else if(x<min1){
    		min1 = x;
    		ans = i+1;
    		count = 1;
    	}
    }
    if(count>1){
    	cout << "Still Rozdil";
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