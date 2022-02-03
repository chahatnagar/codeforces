#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
   	int arr[n];
    for(int &i:arr){
    	cin >> i;
    }
    int min1 = *min_element(arr, arr+n);
    sort(arr, arr+n);
    if(n==1){
    	cout << "NO";
    	return;
    }
    int t = 0;
    for(int i = 0; i < n; i++){
    	if(arr[i]==min1) t++;
    }
    if(t==n){
    	cout << "NO";
    	return;
    }
    for(int i:arr){
    	if(i!=min1){
    		cout << i;
    		return;
    	}
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