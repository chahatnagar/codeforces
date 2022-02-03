#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    int arr[7] = {0};

    for (int i = 0; i < n; ++i)
    {
    	string s; cin >> s;
    	for (int j = 0; j < 7; ++j)
    	{
    		if(s[j]=='1') arr[j]++;
    	}
    }
    sort(arr, arr+7);
    cout << arr[6];

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