#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int x, y;
    cin >> x >> y;
    string m1;
    cin >> m1;
    map<char, int> c1;
    for(char &i:m1){
    	if(i=='R') c1['R']++;
    	if(i=='L') c1['L']++;
    	if(i=='U') c1['U']++;
    	if(i=='D') c1['D']++;
    }
    if(x>0 && y>0){
    	if(c1['R']>=x && c1['U']>=y){
    		cout << "YES";
    		return;
    	}
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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