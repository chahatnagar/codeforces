#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    int sum = 0;
    sum += (n*2)/k;
    if((n*2)%k){
    	sum += 1;
    }
    sum += (n*5)/k;
    if((n*5)%k){
    	sum += 1;
    }
    sum += (n*8)/k;
    if((n*8)%k){
    	sum += 1;
    }

    cout << sum;

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