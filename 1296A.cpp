#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, sum=0, eve=0, odd = 0; cin >> n;
    while(n--){
        int n1;cin >> n1;
        (n1%2==0) ? eve++ : odd++;
        sum+=n1;
    }
    if(sum%2==0 && (eve==0 || odd==0)){
        cout << "NO";
    }else{
        cout << "YES";
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