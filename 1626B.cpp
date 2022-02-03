#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    for(int i = 0; i < s.size()-1; i++){
    	// cout << (s[i+1]-'0')+s[i]-'0' << " ";
    	if(abs((s[i+1]-'0')+(s[i]-'0'))>=10){
    		int num = abs((s[i+1]-'0')+(s[i]-'0'));
    		s[i] = (num%10) + '0';
    		s[i+1] = '1';
    		break;
    	}
    	
    }
    s[1] = s[0] - '0' + s[1];
    for(int i = 1; i < s.size(); i++) {
        cout << s[i];
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