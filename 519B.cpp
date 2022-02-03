#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n), v1(n-1), v2(n-2);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n-1; ++i)
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    v1.push_back(-1);
    for (int i = 0; i < n-2; ++i)
    {
        cin >> v2[i];
    }
    sort(v2.begin(), v2.end());
    v2.push_back(-1);
    v2.push_back(-1);
    for (int i = 0; i < n; ++i)
    {
        if(v[i]!=v1[i])
        {
            cout << v[i] << endl;
            break;
        }
    }
    for (int i = 0; i < n-1; ++i)
    {
        if(v2[i]!=v1[i])
        {
            cout << v1[i] << endl;
            break;
        }
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
    solve();
    return 0;
}