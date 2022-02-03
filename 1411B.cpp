#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool fair(int n)
{
	int num = n;
	while(n)
	{
		if(num%(n%10)==0)
		{
			n/=10;
		}else{
			return false;
		}
	}
	return true;
}
void solve(){
    int n;
    cin >> n;
    while(fair(n)==false)
    {
    	n++;
    }
    cout << n;
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