#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, x, dis = 0;
    cin >> n >> x;
    while(n--){
    	string s1;
    	int n1;
    	cin >> s1 >> n1;
    	if(s1=="+"){
    		x+=n1;
    	}
    	if(s1=="-"){
    		if (n1>x){
    			dis++;
    		}else{
    			x-=n1;
    		}
    	}
    }
    cout << x << " " << dis;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}