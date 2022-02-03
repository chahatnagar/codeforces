#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string os;
    cin >> os;
    string s = os;
    s = os+'a';
    int l = s.length();
    int index = l-1;
    for (int i = 0; i < l/2; ++i)
    {
        if(s[i]!=s[index]){
            cout << "YES" << endl;
            cout << s;
            return;
        }
        index--;
    }
    s = 'a'+os;
    l = s.length();
    index = l-1;
    for (int i = 0; i < l/2; ++i)
    {
        if(s[i]!=s[index]){
            cout << "YES" << endl;
            cout << s;
            return;
        }
        index--;
    }

    cout << "NO";


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