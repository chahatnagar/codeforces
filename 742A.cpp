#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    if(n==0){
    	cout << 1;
    	return;
    }
    int arr[4] = {8, 4, 2, 6};
    int ans = (n%4!=0) ? arr[(n%4)-1] : arr[3];
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