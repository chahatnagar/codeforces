#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    string arr[n];
    string arr1[m];
    // arr[0] = "a", arr1[0] = "a";
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    for (int i = 0; i < m; ++i)
    {
    	cin >> arr1[i];
    }
    int T; cin >> T;
    for(int i=0; i < T; i++){
    	int n1; cin >> n1;
    	// cout << arr[(n1%n)-1] << arr1[(n1%m)-1] << endl;
    	int index, index1; 
    	(n1%n) ? index = (n1%n)-1 : index = (n-1);
    	(n1%m) ? index1 = (n1%m)-1 : index1 = (m-1);
    	cout << arr[index] << arr1[index1] << endl;
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