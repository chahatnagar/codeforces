#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    map<int, int> nc;
    int n;
    cin >> n;
    n = 2*n;
    while(n--)
    {
        int n1;
        cin >> n1;
        if(nc[n1]==0){
            cout << n1 << " ";
            nc[n1]++;
        }

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