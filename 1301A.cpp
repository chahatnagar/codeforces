#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string a, b, c;
    cin >> a >> b >> c;
    int s = a.length();
    for (int i = 0; i < s; ++i)
    {
		if(a[i]==c[i]) continue;
		else if(b[i]==c[i]) continue;
		else{
			cout << "NO";
			return;
		}
    }

    cout << "YES";
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