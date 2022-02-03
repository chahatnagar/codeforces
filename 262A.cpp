#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, k; cin >> n >> k;
    int ln = 0;
    for (int i = 0; i < n; ++i)
    {
    	string s1; cin >> s1;
    	int count = 0;
    	for(char i:s1){
    		if(i=='4' || i=='7'){
    			count++;
    		}
    	}
    	if(count<=k){
    		ln++;
    	}
    }

    cout << ln;
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