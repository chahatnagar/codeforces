#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    map<int, int> cal;
    for (char i = '1'; i <= '4'; ++i)
     {
         cin >> cal[i];
     } 
    string n;
    cin >> n;
    int l = n.length();
    int sum=0;
    for (int i = 0; i < l; ++i)
    {
        sum+=cal[n[i]];
    }
    cout << sum;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}