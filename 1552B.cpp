#include <bits/stdc++.h>
using namespace std;
#define endl              "\n"
#define int               long long
#define rep(i,a,b)        for(int i=a;i<b;i++) 
void solve(){
    int n; cin >> n;
    int arr[n][5];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < 5; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }
    map<int, int> rank;
    for (int i = 1; i <= 5; ++i)
    {
    	vector<int> v1;
    	map<int, int> m1;
    	for (int j = 1; j <= n; ++j)
    	{
    		m1[arr[j-1][i-1]] = j;
    		v1.push_back(arr[j-1][i-1]);
    	}
    	sort(v1.begin(), v1.end());
    	for (int i = 0; i < n; ++i)
    	{
    		rank[m1[v1[i]]]+=(i+1);
    		// cout << m1[v1[i]] << " ";
    	}
    	// cout << endl;



    }
    int min1 = INT_MAX;
    int ans = 0;
    set<int> s1;
    for (int i = 1; i <= n; ++i)
    {
    	s1.insert(rank[i]);
    	if(rank[i]/5<min1){
    		ans = i;
    		min1 = rank[i]/5;
    	}
    	cout << i << ": " << rank[i] << endl;
    }
    if(s1.size()<n){
    	cout << -1;
    	return;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}