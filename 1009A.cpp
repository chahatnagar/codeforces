#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m; cin >> n >> m;
    vector<int> v1(n);
    queue<int> q1;
    for(int &i:v1) cin >> i;
    for(int i = 0; i < m; i++){
    	int n1; cin >> n1;
    	q1.push(n1);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
    	if(v1[i]<=q1.front() && q1.empty()!=1){
    		ans++;
    		q1.pop();
    	}
    }
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