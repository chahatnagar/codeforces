#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    int ans = 0;
    for(char c:s){
    	if(c=='a' || c=='i' || c=='o' || c=='u' || c=='e' || c=='1' || c=='3' || c=='5' || c=='7' || c=='9'){
    		ans++;
    	}
    }

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