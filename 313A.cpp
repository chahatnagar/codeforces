#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int N=n;
    if(n>=0){
    	cout  << n;
    	return;
    }
    n*=-1;
   	int k = n%10;
   	n/=10;
   	int j = n%10;
   	n/=10;
   	if(j<k){
   		cout << -1*((n*10)+j);
   		return;
   	}
   	cout << -1*((n*10)+k);

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