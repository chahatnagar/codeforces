#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, h; cin >> n >> h;
    int count = 0;
    int arr[n];
    for(int &i:arr) cin >> i;
   	sort(arr, arr+n, greater<int>());
    int x = arr[0];
    int y = arr[1];
    if(h%(x+y)==0){
        cout << 2*(h/(x+y));
    }
    else if(h%(x+y)<=x){
        cout << (2*(h/(x+y)))+1;
    }
    else{
        cout << (2*(h/(x+y)))+2;
    }
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