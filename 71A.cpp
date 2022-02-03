#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string s;
    cin >> s;
    if (s.length()>10){
    cout << s[0] << s.length()-2 << s[s.length()-1];
    }else{
        cout << s;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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