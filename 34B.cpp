#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m; cin >> n >> m;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int n1; cin >> n1;
        if(n1<0){
            v1.push_back(n1);
        }
    }
    sort(v1.begin(), v1.end());
    // for(int i:v1) cout << i << " ";
    int ans = 0;
    int size1 = v1.size();
    int min1 = min(m,size1);
    for(int i = 0; i < min1; i++){
        ans+=v1[i];
    }
    // cout << ans;
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