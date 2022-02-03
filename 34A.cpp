#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[n];
    int s1, s2;
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    int min1 = abs(arr[0]-arr[n-1]);
    s1 = 1, s2 = n;
    for (int i = 0; i < n-1; ++i)
    {
    	min1 = min(min1, abs(arr[i]-arr[i+1]));
    	if(min1==abs(arr[i]-arr[i+1])){
    		s1 = i+1, s2 = i+2;
    	}
    }
    cout << s1 << " " << s2;
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