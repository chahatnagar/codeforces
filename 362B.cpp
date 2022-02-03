#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n);
    bool flag = true;
    for (int i = 0; i < m; ++i)
    {
    	int x; cin >> x;
    	if(x==1 || x==n){
    		flag = false;
    	}
    	v[x] = 1;
    }
    if(!flag){
    	cout << "NO";
    	return;
    }
    for (int i = 0; i < n-3; ++i)
    {
    	if(v[i]!=1 && v[i+2]==1 && v[i+1]==1 && v[i+3]==1 && flag){
    		cout << "NO";
    		return;
    	}
    }
    cout << "YES";
    
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