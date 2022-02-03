#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, x, sum = 0;
    cin >> n >> x;
    if(n==1){
    	int n1; cin >> n1;
    	if(x==n1){
    		cout << "NO";
    		return;
    	}else{
    		cout << "YES" << endl;
    		cout << n1;
    		return;
    	}
    }
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	sum+=arr[i];
    }
    if(sum==x){
    	cout << "NO";
    	return;
    }
    sum = 0;
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i)
    {
    	sum+=arr[i];
    	if(sum==x && i!=n-1){
    		cout << arr[i+1] << " " << arr[i] << " ";
    		i++;
    	}else{
    		cout << arr[i] << " ";
    	}
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