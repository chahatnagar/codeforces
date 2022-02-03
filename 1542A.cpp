#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, eve=0, odd=0;
    cin >> n;
    n*=2;
    while(n--){
        int n1; cin >> n1;
        (n1%2==0) ? eve++ : odd++;
    }
    if(eve==odd){
        cout << "Yes";
    }else{
        cout << "No";
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