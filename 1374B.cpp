#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int a = 0, b = 0;
    while(n%2 == 0){
        n/=2;
        a++;
    }
    while(n%3==0){
        n/=3;
        b++;
    }
    if(n != 1 || a>b){
        cout << "-1";
        return;
    }
    cout << (b-a)+b;
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