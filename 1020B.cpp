#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; ++i)
    {
    	int x; cin >> x;
    	m[i] = x;

    }

    for (int i = 1; i <= n; ++i)
    {
    	map<int, int> m2;
    	int curr = i;
    	while(m2[curr]!=2)
    	{
    		m2[curr]++;
    		curr = m[curr];
    	}

    	cout << curr << " ";
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