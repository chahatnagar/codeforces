#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    int zc = 0, oc = 0;
    for(char c:s){
    	if(c=='1') oc++;
    	if(c=='0') zc++;
    }
    if(oc==s.size()){
    	cout << 0;
    	return;
    }
    int tzc = 0;
    bool flag = false;
    for(int i = 0; i < s.size();i++){
    	if(s[i]=='1' && flag==false) continue;
    	if(s[i]=='0'){
    		tzc++;
    		flag = true;
    	}if(s[i]=='1' && flag==true){
    		break;
    	}
    }
    if(tzc==zc){
    	cout << 1;
    	return;
    }
    cout << 2;
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