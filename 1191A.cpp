#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    if((n%4)==3){
    	cout << 2 << " A";
    }
    if(n%4==0){
    	cout << 1 << " A";
    }
    if(n%4==1){
    	cout << 0 << " A";
    }
    if(n%4==2){
    	cout << 1 << " B";
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
    solve();
    return 0;
}