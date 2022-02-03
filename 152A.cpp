#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m;
    cin >> n >> m;
    int hash[m] = {0};
    set<int> s;
    vector<vector<int>> v(n, vector<int> (m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            char x; cin >> x;
            v[i][j] = x-'0';
            hash[j] = max(hash[j], x-'0');
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(v[i][j]==hash[j]) s.insert(i+1);
        }
    }

    cout << s.size();

    // for(int i : s){
    //     cout << i << " ";
    // }




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