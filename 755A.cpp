#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool isPrime(int n){
	for (int i = 2; i <= n/2; ++i)
	{
		if(n%i==0){
			return true;
		}
	}
	return false;
}
void solve(){
    int n; cin >> n;
    int i = 1;
    while(true){
    	if(isPrime((i*n)+1)){
    		cout << i;
    		return;
    	}else{
    		i++;
    	}
    }
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