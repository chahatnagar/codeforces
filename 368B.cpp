#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m; cin >> n >> m;
   	map<int, int> m1;
   	map<int, int> m2;
   	stack<int> s;
    vector<int> v(n);
    vector<int> v2(m);
    for(int &i:v) cin >> i;
    for (int i = 0; i < m; ++i)
    {
    	cin >> v2[i];
    }
    int count = 0;
    for(int i = v.size()-1; i >= 0; i--){
    	if(m1[v[i]]==0){
    		count++;
    		m1[v[i]]++;
    	}
    	m2[i+1] = count;
    }
    for (int i = 0; i < m; ++i)
    {
    	cout << m2[v2[i]] << endl;
    }
    // for(auto i:m1){
    // 	cout << i.first << " ";
    // }
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