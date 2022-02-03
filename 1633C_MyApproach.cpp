#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int hc, dc, hm, dm, k, w, a; 
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;

    for (int i = 0; i < k+1; i++)
    {
    	int h = hc + (a*i);
    	int d = dc + (w*(k-i));

    	int htkm = (hm/d)+(hm%d ? 1 : 0);
    	int htku = (h/dm)+(h%dm ? 1 : 0);

    	if(htkm <= htku)
    	{
    		cout << "YES";
    		return;
    	}
    }
    cout << "NO";
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