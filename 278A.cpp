#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    map<int, int> next_distance;
    map<int, int> next_station;
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	int v; cin >> v;
    	if(i==n-1){
    		next_station[i+1] = 1;
    		next_distance[i+1] = v;
    		continue;

    	}
    	next_distance[i+1] = v;
    	next_station[i+1] = i+2;
    }
    int s, t; cin >> s >> t;
    int s_val = s;
    int dist1 = 0, dist2 = 0;
    while(s!=t){
    	dist1 += next_distance[s];
    	s = next_station[s];
    }
    while(t!=s_val){
    	dist2 += next_distance[t];
    	t = next_station[t];
    }
    cout << min(dist1, dist2);
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