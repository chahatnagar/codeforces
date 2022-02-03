#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    map<int, int> mp1;
    int n, min=INT_MAX, index=0;
    cin >> n;
    int v1[n];
    for (int &i:v1)
    {
        cin >> i;
        mp1[i]++;
    }
    for (int i = 0; i < n; ++i)
    {
        if(mp1[v1[i]]==1 && v1[i]<min){
            index = i+1;
            min = v1[i];
        }
    }
    if(min==INT_MAX){
        cout << -1;
    }else{
        cout << index;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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