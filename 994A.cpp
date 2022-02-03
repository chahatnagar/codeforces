#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m; cin >> n >> m;
    vector<int> v1(n);
    map<int, int> m1;
    for(int &i:v1) cin >> i;
    for (int i = 0; i < m; ++i)
    {
    	int n1; cin >> n1;
    	m1[n1]++;
    }

    for(int i:v1){
    	if(m1[i]==1) cout << i << " ";
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