#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, s; cin >> s >> n;
    map<int, vector<int>> m1;
    for (int i = 0; i < n; ++i)
    {
    	int x, y; cin >> x >> y;
    	m1[x].push_back(y);
    }
    for (auto i:m1){
    	sort(i.second.begin(), i.second.end(), greater<int>());

    }
    for(auto i:m1){
    	for(auto j:i.second){
    		if(s>i.first) s+=j;
    		else{
    			cout << "NO";
    			return;
    		}
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