#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, count=0;
    cin >> n;
    if(n==1){
        cout << 0;
        return;
    }
    while(n>1){
        if(n%2==0){
            n = n/2;
        }else if(n%3==0){
            n = (2*n)/3;
        }else if(n%5==0){
            n = (4*n)/5;
        }else{
            cout << -1;
            return;
        }
        count++;

    }
    cout << count;
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