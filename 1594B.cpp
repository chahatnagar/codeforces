#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k, ans = 0; 
    cin >> n >> k;
    int p = 1;
    for(int i = 0; i < 31; i++)
    {
    	if((1 << i) & k)
    	{

    		ans=((ans+p)%1000000007);
    	}
    	p = (p*n)%1000000007;
    }

    cout << (ans%1000000007);

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