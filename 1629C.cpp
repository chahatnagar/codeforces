#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int MEX(vector<int> v){
	int mex = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i]==mex) mex++;
	}
	return mex;
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin >> a[i];
    }
    cout << MEX(a);

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