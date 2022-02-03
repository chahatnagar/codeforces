#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> v1;
    for (int i = k+1; i <= n; ++i)
    {
    	v1.push_back(i);
    }
    for (int i = 1; i < (k/2)+1; ++i)
    {
    	v1.push_back(i);
    }
    cout << v1.size() << endl;
    for(int i:v1){
    	cout << i << " ";
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