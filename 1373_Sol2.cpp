#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    stack<char> s1;
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
    	if(i==0){
    		s1.push(s[i]);
    	}else if(s[i]!=s1.top() && s1.size()>=1){
    		s1.pop();
    		ans++;
    	}else{
    		s1.push(s[i]);
    	}
    }
    // cout << ans;
    if(ans%2){
    	cout << "DA";
    }else{
    	cout << "NET";
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}