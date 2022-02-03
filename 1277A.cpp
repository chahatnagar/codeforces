#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string n; cin >> n;
    int size1 = n.size();
    int val = 1;
    int num = stoi(n);
    int ans = 0;
    while(size1!=1){
    	num/=10;
    	val*=10;
    	ans+=9;
    	size1--;
    }
    cout << ans << " " << val*num;
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