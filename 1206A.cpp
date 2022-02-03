#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, nmax = INT_MIN, m, mmax=INT_MIN;
    cin >> n;
    while(n--){
    	int n1; cin >> n1;
    	nmax = max(nmax, n1);
    }
    cin >> m;
    while(m--){
    	int n1; cin >> n1;
    	mmax = max(mmax, n1);
    }
    cout << nmax << " " << mmax;
    
    
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