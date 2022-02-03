#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
bool adj_char_check(string &s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i]!=s[i+1]){
			return true;
		}
	}
	return false;
}
void solve(){
    string s; cin >> s;
    int count = 0;
    
    while(adj_char_check(s)){
    	for(int i = 0; i < s.size()-1; i++){
			if(s[i]!=s[i+1]){
				string main1 = "";
				for(int j = 0; j < i; i++) main1+=s[j];
				for(int j = i+2; j < s.size(); j++) main1+=s[j];
				s = main;
				break;
			}
		}
		
    }

    cout << count;
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