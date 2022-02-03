#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, count = 0;
    cin >> n;
    int N = n;
    if(n<10){
    	cout << n;
        return;
    }
    int m = 0;
    while(n!=0){
        m = n%10;
        n/=10;
        count++;
    }

    int sum = 0, t = 1;
    int ans = ((count-1)*9)+(m-1);
    while(count--){
        sum+=(m*t);
        t*=10;
    }

    if(N>=sum){
        cout << ans+1;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}