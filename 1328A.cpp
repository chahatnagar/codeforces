#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a, b;
    cin >> a >> b;
    (a%b==0) ? cout << a%b : cout << b-(a%b);
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