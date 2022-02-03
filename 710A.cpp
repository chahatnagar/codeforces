#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    int ans = 8;
    if((s[0]=='a' || s[0]=='h') && (s[1]=='1' || s[1]=='8')){
    	ans-=5;
    	cout << ans;
    	return;
    }
    if((s[0]=='a' || s[0]=='h') && (s[1]!='1' || s[1]!='8')){
    	ans-=3;
    	cout << ans;
    	return;
    }
    if((s[0]!='a' || s[0]!='h') && (s[1]=='1' || s[1]=='8')){
    	ans-=3;
    	cout << ans;
    	return;
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