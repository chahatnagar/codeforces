#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    for(char c:s){
    	if(c=='A' || c=='H' || c=='I' || c=='M' || c=='O' || c=='T' || c=='U' || c=='V' || c=='W' || c=='X' || c=='Y'){
    		continue;
    	}else{
    		cout << "NO";
    		return;
    	}
    }
 	string s2 = s;
 	reverse(s.begin(), s.end());
 	if(s==s2){
 		cout << "YES";
 	}else{
 		cout << "NO";
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