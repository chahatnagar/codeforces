#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    int max1 = INT_MIN, min1 = INT_MAX;
    int arr[m];
    for(int i = 0; i < m; i++){
    	cin >> arr[i];
    }
    sort(arr, arr+m);
    int f = 0, l = n-1;
    for(int i = 0; i <= m-n; i++){
    	// cout << arr[f] << " " << arr[l] << endl;
    	min1 = min(min1,arr[l] - arr[f]);
    	f++;
    	l++;
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