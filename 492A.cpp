#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    if (n==1){
    	cout << 1;
    	return;
    }
    int sum=1, SUM=1, PSUM=1;
    for (int i = 2; i <= n; ++i)
    {
    	sum+=i;
    	PSUM = SUM;
    	SUM+=sum;
    	if(PSUM<=n && SUM>n){
    		cout << i-1;
    	}
    	
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
    solve();
    return 0;
}