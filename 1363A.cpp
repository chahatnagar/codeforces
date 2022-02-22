#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, x, oc = 0, ec = 0;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
    {
    	int num; cin >> num;

    	if(num%2) oc++;
    	else ec++;
    }

    if((n == x && oc%2 == 0) || oc == 0 || (ec == 0 && x%2 == 0)){
            cout << "NO";
            return;
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