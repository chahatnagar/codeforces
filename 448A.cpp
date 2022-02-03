#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int a1, a2, a3; cin >> a1 >> a2 >> a3;
    int b1, b2, b3; cin >> b1 >> b2 >> b3;
    int n, sc = 0; cin >> n;
    int sum1 = a1+a2+a3;
    int sum2 = b1+b2+b3;
    (sum1%5==0) ? sc += sum1/5 : sc += (sum1/5)+1;
    (sum2%10==0) ? sc += sum2/10 : sc += (sum2/10)+1;

    (sc<=n) ?  cout << "YES" : cout << "NO";




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