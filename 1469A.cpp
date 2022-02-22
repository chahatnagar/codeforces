#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s;
    cin >> s;

    if(s.length()%2)
    {
    	cout << "NO";
    	return;
    }
    if(s[0]==')'){
    	cout << "NO";
    	return;
    }
    if(s[s.size()-1]=='(')
    {
    	cout << "NO";
    	return;
    }

    cout << "YES";
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