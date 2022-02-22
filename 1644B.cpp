#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> v;
    if(n==3)
    {
    	cout << 3 << " " << 2 << " " << 1 << endl;
    	cout << 1 << " " << 3 << " " << 2 << endl;
    	cout << 3 << " " << 1 << " " << 2 << endl;
    	return;
    }
    for(int i = n; i >= 1; i--)
    {
    	v.push_back(i);
    }
   	
    for (int i = 0; i < n; ++i)
    {
    	int t1 = v[0];
    	for(int j = 1; j < n; j++)
    	{
    		v[j-1] = v[j];
    		cout << v[j-1] << " ";
    	}
    	v[n-1] = t1;
    	cout << t1 << endl;
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
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}