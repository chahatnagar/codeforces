#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, os = 0, es = 0, oc = 0, ec = 0;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin >> x;
    	v[i] = x;
    	if(i!=0 && i!=n-1)
    	{
    		if(x%2)
    		{
    			os+=(x+1);
    			oc++;
    		}
    		else
    		{
    			es+=(x);
    			ec++;
    		}
    	}
    	
    }

    if((oc==1 && ec==0) || (oc*2==os && ec==0))
    {
    	cout << -1;
    	return;
    }

    cout << (os/2)+(es/2);



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