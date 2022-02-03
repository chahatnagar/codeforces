#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int o = 0, e = 0;
    int o1, e1;
    for (int i = 0; i < n; ++i)
    {
    	int x1; cin >> x1;
    	if(x1%2){
    		o1 = i+1;
    		o++;
    	}else{
    		e++;
    		e1 = i+1;
    	}
    }

    cout << ((o<e) ? o1 : e1);
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