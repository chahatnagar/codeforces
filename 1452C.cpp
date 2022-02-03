#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    int first = 0, second = 0, ans = 0;
    for (char c:s)
    {
        if(c=='(') first++;
        if(c=='[') second++;
        if(c==')'){
            if(first){
                first--;
                ans++;
            }
        }
        if(c==']'){
            if(second){
                second--;
                ans++;
            }
        }
    }

    cout << ans;


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