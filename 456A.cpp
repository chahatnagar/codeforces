#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
   	vector<pair<int, int>> v;
   	for (int i = 0; i < n; ++i)
   	{
   		int x, y; cin >> x >> y;
   		v.push_back({x, y});
   	}

   	sort(v.begin(), v.end());
   	int q = v[0].second;
   	for(int i = 0; i < n; i++)
   	{
   		if(v[i].second < q)
   		{
   			cout << "Happy Alex";
   			return;
   		}
   		q = max(q, v[i].second);
   	}
   	cout << "Poor Alex";
   	



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