#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
    	if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I'){
    		continue;
    	}
    	if((s[i]!='a' || s[i]!='o' || s[i]!='y' || s[i]!='e' || s[i]!='u' || s[i]!='i' || s[i]!='A' || s[i]!='O' || s[i]!='Y' || s[i]!='E' || s[i]!='U' || s[i]!='I') && s[i]>=65 && s[i]<=90){
    		char c = s[i]+32;
    		cout << '.' << c;
    		
    	}
    	if((s[i]!='a' || s[i]!='o' || s[i]!='y' || s[i]!='e' || s[i]!='u' || s[i]!='i' || s[i]!='A' || s[i]!='O' || s[i]!='Y' || s[i]!='E' || s[i]!='U' || s[i]!='I') && s[i]>=97 && s[i]<=122){
    		cout << '.' << s[i];
    		continue;
    	}
    	// cout << "." << s[i];
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