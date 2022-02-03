#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string f,l; cin >> f >> l;
    string ans = "";
    ans+=f[0];
    for(int i = 1; i < f.size(); i++){
    	if(f[i]<l[0]) ans+=f[i];
    	else break;
    }
    
    ans+=l[0];
    cout << ans;
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