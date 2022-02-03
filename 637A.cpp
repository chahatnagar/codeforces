#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int prev;  cin >> prev;
    if(prev>15){
    	cout << 15;
    	return;
    }
    for (int i = 1; i < n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1-prev>=15){
    		cout << prev+15;
    		return;
    	}
    	prev = n1;

    }
    cout << 90;
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