#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[n-1];
    for(int &i:arr){
    	cin >> i;
    }
    int a, b; cin >> a >> b;
    int sum = 0;
    for(int i=a-1;i<b-1;i++){
    	sum+=arr[i];
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