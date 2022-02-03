#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    double arr[2];
    double max1 = INT_MIN;
    for (double i = 1; i <= n; ++i)
    {
    	int a = i;
    	int b = n-i;
    	if(__gcd(a,b)==1 && (i/n-i)>max1){
    		arr[0] = i;
    		arr[1] = n-i;
    	}
    }

    cout << arr[0] << " " << arr[1];
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