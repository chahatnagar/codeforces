#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, k; cin >> n >> k;
    if(k>n/2 || (n==2 && k==1)){
    	cout << -1;
    	return;
    }
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    	arr[i] = i+1;
    }



    for (int i = 0; i < k; i++)
    {
    	for (int j = 0; j < n-1; j++)
    	{
    		if(arr[j-1]<arr[j] && arr[j]<arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				break;
    		}
    	}
    }

    for(int i:arr){
    	cout << i << " ";
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}