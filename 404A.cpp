#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<vector<char>> m(n, vector<char> (n));
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		cin >> m[i-1][j-1];
    	}
    }
    char prevx = m[0][0];
    char prevb = m[0][1];
    if(prevx==prevb){
    	cout << "NO";
    	return;
    }
    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		if((i==j || i+j==n+1) && m[i-1][j-1]!=prevx){
    			cout << "NO";
    			return;
    		}else if(!(i==j || i+j==n+1) && m[i-1][j-1]!=prevb){
    			cout << "NO";
    			return;
    		}
    	}
    }
    cout << "YES";

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