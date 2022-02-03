#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    set<pair<string, string>> s;
    for (int i = 0; i < n; ++i)
    {
    	string s1, s2; cin >> s1 >> s2;
    	s.insert({s1, s2});
    }

    cout << s.size();
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