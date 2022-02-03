#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int p, n; cin >> p >> n;
    map<int, int> m1;
    for (int i = 1; i <= n; ++i)
    {
    	int n1; cin >> n1;
    	if(m1[n1%p]==1){
    		cout << i;
    		return;
    	}
    	m1[n1%p]++;
    }
    cout << -1;
    

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