#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	map<int, pair<int, int>> m1;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
    	pair<int, int> p1;
    	int n1, n2; cin >> n1 >> n2;
    	p1.first = n1;
    	p1.second = n2;
    	m1[i] = p1;
    }
    int k; cin >> k;
    int ans = n;
    for(auto i:m1){
    	if(k>=i.second.first && k<=i.second.second){
    		cout << ans;
    		return;
    	}
    	ans--;
    	// cout << i.second.first << " " << i.second.second << endl;
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