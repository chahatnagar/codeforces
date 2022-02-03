#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, minmoves = 0;
    cin >> n;
    string os, pass; cin >> os >> pass;
    for(int i=0;i<n;i++){
    	int min1 = min(abs(os[i]-pass[i]), min(os[i], pass[i])+(10-max(os[i], pass[i])));
    	minmoves+=min1;
    }
    cout << minmoves;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}