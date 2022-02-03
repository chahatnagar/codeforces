#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int max1 = INT_MIN, count = 0;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]=='#'){
    		count++;
    		max1 = max(max1, count);
    	}else{
    		count = 0;
    	}
    }

   	if(max1>=k){
   		cout << "NO";
   	}else{
   		cout << "YES";
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