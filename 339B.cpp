#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    cout << n;
    return;
    vector<string> v1;
    for (int i = 0; i < n-2; ++i)
    {
        string x; cin >> x;
        v1.push_back(x);
    }

    string ans = v1[0][1];
    cout << v1[0];
    int s = v1.size();
    for (int i = 0; i < s; ++i)
    {
        cout << "a";
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}