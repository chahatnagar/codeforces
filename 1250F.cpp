#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    if(n==1){
    	cout << 4;
    	return;
    }
    int min1 = INT_MAX;
    for(int i = 1; i <= n/2; i++){
    	if(n%i==0){
    		int sum = (2*(i))+(2*(n/i));
    		min1 = min(min1, sum);
    	}
    }
    cout << min1;
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