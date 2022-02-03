#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[n], arr1[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	arr1[i] = arr[i];
    }


    sort(arr, arr+n);
    map<int, int> m1;
    for (int i = 0; i < n; ++i)
    {
    	m1[arr[i]] = 1+(n-(i+1));
    }
    for (int i = 0; i < n; ++i)
    {
    	cout << m1[arr1[i]] << " ";
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