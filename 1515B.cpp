#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
bool sqrcheck(int a)
{
	int y = sqrt(a);
    return (y*y==a);
}
void solve(){
    int n;
    cin >> n;
    int a = n/4, b = n/2;
    if((sqrcheck(a) && n%4==0) || (sqrcheck(b) && n%2==0))
    {
    	cout << "YES";
    	return;
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