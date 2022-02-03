#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int pos = 0, neg = 0;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1>=0) pos+=n1;
    	if(n1<0) neg+=n1;
    }
    cout << (pos-neg);
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