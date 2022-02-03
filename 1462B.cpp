#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    	cout << "YES";
    	return;
    }
    if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    	cout << "YES";
    	return;
    }
    if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0'){
    	cout << "YES";
    	return;
    }
    if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0'){
    	cout << "YES";
    	return;
    }
    if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0'){
    	cout << "YES";
    	return;
    }
    cout << "NO";
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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