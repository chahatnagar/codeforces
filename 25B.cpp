#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    if(n%2){
    	for (int i = 0; i < s.size()-3; i+=2)
    	{
    		cout << s[i] << s[i+1] << "-";
    	}
    	cout << s[s.size()-3] << s[s.size()-2] << s[s.size()-1];
    }else{
    	for (int i = 0; i < s.size(); i+=2)
    	{
    		if(i!=s.size()-2)
    			cout << s[i] << s[i+1] << "-";
    	}
    	cout << s[s.size()-2] << s[s.size()-1];
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