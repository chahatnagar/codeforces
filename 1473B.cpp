#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string a, b; cin >> a >> b;
    string s1 = "", s2 = "";
    int l1 = a.size();
    int l2 = b.size();
    int lcm = (l1*l2)/__gcd(l1,l2);

    l1 = lcm/l1;
    l2 = lcm/l2;

    while(l1--){
    	s1 += a;
    }
    while(l2--){
    	s2 += b;
    }

    if(s1==s2){
    	cout <<  s1;
    	return;
    }
    cout << -1;



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