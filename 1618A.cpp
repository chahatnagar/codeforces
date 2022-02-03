#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    vector<int> v1(7);
    for(auto &i:v1) cin >> i;
    sort(v1.begin(), v1.end());
	cout << v1[0] << " " << v1[1] << " " << v1[6]-(v1[0]+v1[1]);
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