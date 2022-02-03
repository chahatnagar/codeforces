#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    map<string, int> m;
    string s; cin >> s;
    for (int i = 0; i < 10; ++i)
    {
    	string ss; cin >> ss;
    	m[ss] = i;
    }
    for (int i = 0; i < s.size(); i+=10)
    {
    	string dec = "";
    	for (int j = i; j < i+10; ++j)
    	{
    		dec+=s[j];
    	}
    	cout << m[dec];
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