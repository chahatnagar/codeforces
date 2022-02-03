#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m; cin >> n >> m;
    map<int, int> m1;
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
    	int e; cin >> e;
    	m1[e] = i+1;
    	q.push(e);
    }
    while(q.size()!=1){
    	if(q.front()<=m) q.pop();
    	else{
    		int r = q.front()-m;
    		m1[r] = m1[q.front()];
    		q.pop();
    		q.push(r);
    	}
    }
    cout << m1[q.front()];
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