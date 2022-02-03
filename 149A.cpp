#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[12]; 
    for(int &i:arr) cin >> i;
    sort(arr, arr+12, greater<int>());
	int a = 0;
	int i = 0;
	while(a<n){
		a+=arr[i];
		i++;
        if(i==13){
            cout << -1;
            return;
        }
	}

    cout << i;

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