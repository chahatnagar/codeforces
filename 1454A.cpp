#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n1; cin >> n1;
    int p = 1;
    for (int i = n1; i >= 1; i--)
    {
        if(i==p){
            cout << i-1 << " " << i << " ";
            i--;
        }else{
        cout << i << " ";
        }
        p++;
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