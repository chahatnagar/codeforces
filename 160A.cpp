#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[n];
    for(int &i:arr){
    	cin >> i;
    }
    for(int i = 0; i < n-1; i++){
    	for(int j = 0; j < n - i - 1; j++){
    		if(arr[j]>arr[j+1]){
    			int temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
    		}
    	}
    }
    int f = n-2, l = n - 1;
    int count = 1;
    int sums = 0, summ = arr[l];
    for(int i = 0; i <= f; i++) sums += arr[i];
    while(sums>=summ){
    	sums -= arr[f];
    	f--;
    	l--;
    	summ += arr[l];
    	count++;
    }
    cout << count;

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