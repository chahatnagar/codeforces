#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    if(n==1){
    	int a, b; cin >> a >> b;
    	cout << b << " " << a;
    	return;
    }
    n = n*2;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    for (int i = 1; i < n-1; ++i)
    {
    	for (int i = 0; i < n; ++i)
    	{
    		cout << arr[i] << " ";
    	}
    	if((arr[i-1]+arr[i+1])/2==arr[i]){
    		int temp = arr[i];
    		arr[i] = arr[i+1];
    		arr[i+1] = temp;
    	}
    	
    	cout << endl;

    }
    for (int i = 0; i < n; ++i)
    	{
    		cout << arr[i] << " ";
    	}
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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