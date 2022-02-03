#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, i = 0, prev; cin >> n >> m;
    while(m>=0){
    	i++;
    	prev = m;
    	m-=i;
    	if(i==n){
    		i=0;
    	}
    }
    cout << prev;
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