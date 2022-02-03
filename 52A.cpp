#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    int arr[3] = {0};
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	arr[x-1]++;
    }
    sort(arr, arr+3);
    cout << n-arr[2];
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