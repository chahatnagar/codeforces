#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<string> v1;
    for (int i = 0; i < n-2; ++i)
    {
        string s; cin >> s;
        v1.push_back(s);
    }

    string ans;
    ans += v1[0][0];
    for (int i = 0; i < v1.size(); ++i)
    {
        if(i<v1.size()-1 && v1[i][1]==v1[i+1][0]){
            ans+=v1[i][1];
            continue;
        }
        if(i<v1.size()-1 && v1[i][1]!=v1[i+1][0]){
            ans+=v1[i][1];
            ans+=v1[i+1][0];
        }
        else ans+=v1[i][1];
    }
    if(ans.size()!=n){
        cout << "a" << ans;
    }else{
        cout << ans;
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