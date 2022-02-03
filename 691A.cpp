#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int zc = 0;
    if(n==1){
    	int n1; cin >> n1;
    	if(n1==1) cout << "YES";
    	else cout << "NO";
    	return;
    }
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1==0) zc++;
    }
    if(zc==1){
    	cout << "YES";
    	return;
    }
    cout << "NO";
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