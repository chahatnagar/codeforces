#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int w,h,n,count=1;
    cin >> w >> h >> n;
    while(w%2==0){
        count*=2;
        w/=2;
    }
    while(h%2==0){
        count*=2;
        h/=2;
    }
    if(count>=n){
        cout << "YES";
        return;
    }
    cout << "NO";
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