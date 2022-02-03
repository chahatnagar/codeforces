#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    string s1 = "", s2 = "";
    if(s.size()%2){
    	cout << "NO";
    	return;
    }
    for(int i = 0; i < s.size()/2; i++){
    	s1+=s[i];
    }
    
    for(int i = (s.size()/2); i < s.size(); i++){
    	s2+=s[i];
    }
    if(s1==s2){
    	cout << "YES";
    	return;
    }
    cout << "NO";
    // cout << s1 << " " << s2;
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