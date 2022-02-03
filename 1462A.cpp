#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    int lp = n-1, fp = 0;
    int arr[n];
    int arr1[n];
    for(int &i: arr){
    	cin >> i;
    }
    for (int i = 1; i <= n; ++i)
    {
    	if(i%2){
    		arr1[i-1] = arr[fp];
    		fp++;
    	}else{
    		arr1[i-1] = arr[lp];
    		lp--;
    	}
    }
    for(int &i:arr1){
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