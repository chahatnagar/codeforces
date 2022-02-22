#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n, m;
    cin >> n;
    vector<int> v1(n);
    for(int &i : v1)
    {
        cin >> i;
    }

    cin >> m;
    vector<int> v2(m);
    for(int &i : v2)
    {
        cin >> i;
    }
    int m1 = 0, c1 = 0;

    for(int i : v1)
    {
        c1+=i;
        m1 = max(m1, c1);
    }

    int m2 = 0, c2 = 0;

    for(int i : v2)
    {
        c2+=i;
        m2 = max(m2, c2);
    }

    cout << m1+m2;



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