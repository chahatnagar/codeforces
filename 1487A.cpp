#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n, mincount=0, min1 = 101;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int n1; cin >> n1;
        if(n1<min1){
            mincount=1;
            min1 = n1;
        }else if(n1==min1){
            mincount++;
        }
    }

    cout << n-mincount;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);

    // freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}