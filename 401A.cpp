#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, x; cin >> n >> x;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int n1; cin >> n1;
        sum += n1;
    }

    int ans = 0;
    
    while(sum!=0){
        ans+=(sum/x);
        sum = sum%x;    
        x--;
    }

    cout << abs(ans);

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