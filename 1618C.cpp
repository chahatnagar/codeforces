#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, g1, g2;
    cin >> n;
    vector<int> v(n);

    for(int &i : v)
    {
        cin >> i;
    }

    g1 = v[0], g2 = v[1];

    for (int i = 2; i < n; ++i)
    {
        if(i%2==0)
        {
            g1 = __gcd(g1, v[i]);
        }else{
            g2 = __gcd(g2, v[i]);
        }
    }

    
    bool flag1 = true, flag2 = true;
    if(g1==g2)
    {
        cout << 0;
        return;
    }
    
    for (int i = 0; i < n; ++i)
    {
        if(i%2 && v[i]%g1==0){
            flag1 = false;
            break;
        }
    }
    
    for (int i = 0; i < n; ++i)
    {
        if(i%2==0 && v[i]%g2==0){
            flag2 = false;
        }
    }

    if(!flag1 && !flag2){
        cout << 0;
    }else if(flag1){
        cout << g1;
    }else if(flag2){
        cout << g2;
    }
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