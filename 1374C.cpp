#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    stack<char> s1;
    string s; cin >> s;
    int obc = 0, cbc = 0;
    for (int i = 1; i < s.size(); ++i)
    {
    	if(s[i]=='(') obc++;
    	else if(obc>=1) obc--;
    	
    }
    // int ans = 0;
    // while(!s1.empty()){
    // 	ans++;
    // 	s1.pop();
    // }
    cout << obc;
    
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