#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int k, l; cin >> k >> l;
    int ans = 0;
    while(l>k){
    	if(l%k){
    		cout << "NO";
    		return;
    	}else{
    		l/=k;
    	}
    	ans++;
    }
    if(l==k){
    	cout << "YES" << endl << ans;
    }else{
    	cout << "NO";
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