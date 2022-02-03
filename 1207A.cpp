#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int b, p, f; cin >> b >> p >> f;
    int h, c; cin >> h >> c;
    int max1, min1;
    int ans = 0;
    (h>c) ? max1 = p : max1 = f;
    (h<c) ? min1 = p : min1 = f;
    int filling1 = max1;
    while(2*filling1>b){
    	filling1--;
    }
    if(2*filling1<=b){
    	ans+=max(h,c)*filling1;
    	b-=(2*filling1);
    }
    int filling2 = min1;
    while(2*filling2>b){
    	filling2--;
    }
    if(2*filling2<=b){
    	ans+=min(h,c)*filling2;
    }

    cout<< ans;
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