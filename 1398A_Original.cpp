#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
	int n; cin >> n;
	int a, b, c;
	for(int i=0; i<n; i++){
		int n1; cin >> n1;
		if(i==0) a = n1;
		if(i==1) b = n1;
		if(i==n-1) c = n1;
	}
	if(a+b<=c){
		cout << 1 << " " << 2 << " " << n;
		return;
	}
	cout << -1;
    // int n;
    // cin >> n;
    // int n1; cin >> n1;
    // int n2; cin >> n2;
    // int max1 = max(n1,n2);
    // int min1 = min(n1,n2);
    // int maxi, mini;
    // (max1==n1) ? maxi = 1 : maxi = 2;
    // (min1==n2) ? mini = 2 : mini = 1;
    // int sum = max1+min1;
    // for(int i=3; i<=n;i++){
    // 	int n1; cin >> n1;
    // 	sum+=n1;
    // 	if(sum-max({n1, max1, min1})<=max({n1, max1, min1})){
    // 		int arr[3] = {mini, i, maxi};
    // 		sort(arr, arr+3);
    // 		for(int i:arr){
    // 			cout << i << " ";
    // 		}
    // 		return;
    // 	}
    // 	min1 = min(n1, min1);
    // 	(min1==n1) ? mini = i : mini = mini;
    // 	max1 = min(n1, max1);
    // 	(max1==n1) ? mini = i : maxi = maxi;

    // }
    // cout << -1;
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