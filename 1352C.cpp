#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, k, ind = 1;
    cin >> n >> k;
    vector<int> v;
    for (int i = 1; i <= 100000001; ++i)
    {
        if(ind==k+1) break;
        if(i%n)
        {
            v.push_back(i);
            ind++;
        }
    }
    cout << v[v.size()-1];

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