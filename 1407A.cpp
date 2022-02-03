#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum1 = 0, sum2 = 0, in = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	v[i] = x;
    	if(in%2==0) sum1+=x;
    	else sum2+=x;
    	in++;
    }
    if(n==2)
    {
    	if(sum1==sum2)
    	{
    		cout << 2 << endl << sum1 << " " << sum2;
    		return;
    	}else{
    		cout << 1 << endl << 0;
    		return;
    	}
    }
    if(sum1==sum2)
    {
    	cout << n << endl;
    	for (int i = 0; i < n; ++i)
    	{
    		cout << v[i] << " ";
    	}
    	return;
    }
    cout << min(sum1, sum2)*2 << endl;
    for (int i = 0; i < min(sum1, sum2)*2; ++i)
    {
    	cout << 1 << " ";
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
        cout << endl;
    }
    return 0;
}