#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int max1 = INT_MIN;
    set<char> s1;
    for(int i = 0; i < s.size(); i++){
    	if(s[i]>=65 && s[i]<=95) s1.clear();
    	else s1.insert(s[i]);
    	int size1 = s1.size();
    	max1 = max(max1, size1);
    }
    cout << max1;
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