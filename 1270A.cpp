#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k1, k2; cin >> n >> k1 >> k2;
    int p1 = INT_MIN, p2 = INT_MIN;
    for (int i = 0; i < k1; ++i)
    {
    	int x; cin >> x;
    	p1 = max(p1, x);
    }

    for (int i = 0; i < k2; ++i)
    {
    	int x; cin >> x;
    	p2 = max(p2, x);
    }

    if(p1>p2){
    	cout << "YES";
    }else{
    	cout << "NO";
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