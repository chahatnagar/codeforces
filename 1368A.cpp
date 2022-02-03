#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    int i = 0;
    while(a<=n && b<=n){
    	if(a<b){
    		a+=b;
    		i++;
    	}else{
    		b+=a;
    		i++;
    	}
    }
    cout << i;
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