#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    int arr[s.size()] = {0};
    int n; cin >> n;
    int sum = 0;
    for (int i = 1; i < s.size(); ++i)
    {	

    	if(s[i]==s[i-1]) sum++;
    	arr[i] = sum;

    }
    for (int i = 0; i < n; ++i)
    {
    	int x, y; cin >> x >> y;
     	cout << arr[y-1]-arr[x-1] << endl;
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