#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;
    int arr[3] = {a,b,c};
    sort(arr, arr+3);
    int ans = 0;
    if(abs(arr[0]-arr[1])<d){
    	ans+=(d-abs(arr[0]-arr[1]));
    }
    if(abs(arr[2]-arr[1])<d){
    	ans+=(d-abs(arr[1]-arr[2]));
    }
    
    cout << ans;
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
    solve();
    return 0;
}