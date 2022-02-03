#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int oc = 0, zc = 0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i]=='0') zc++;
        else oc++;
    }
    cout << n-(2*min(zc,oc));   
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