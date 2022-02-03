#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"

void solve(){
    int x,y,n;
    cin >> x >> y >> n;
    if(n%x==y)
    {
        cout << n;
    }else if(n%x>y){
        cout << n-((n%x)-y);
    }else if(n%x<y){
        cout << (n-(n%x))-(x-y);
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