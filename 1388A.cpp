#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    if(n<=30){
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    if(n==36 || n==40 || n==44){
        cout << "6 10 15 " << n-31;
    }else{
        cout << "6 10 14 " << n-30;
    }
}
int32_t main()
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