#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    if(s[0]>=48 && s[0]<=57){
    	cout << "false";
    	return;
    }
    for(int i = 0; i < s.length(); i++){
    	if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57) || s[i]=='_'){
    		continue;
    	}else{
    		cout << "false";
    		return;
    	}
    }
    cout << "true";
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