#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool sign(int num)
{
	return num>0;
}
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i : v)
    {
    	cin >> i;
    }
   	int ans = 0;
   	for(int i = 0; i < n; i++)
   	{
   		int j = i;
  		int max1 = v[i];
   		while(j<n && sign(v[i])==sign(v[j]))
   		{
   			max1 = max(max1, v[j]);
   			j++;
   		}
   		i = j-1;
   		ans += max1;
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