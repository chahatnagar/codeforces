#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1; arr[i] = n1;
    }
    for (int i = 0; i < n; ++i)
    {
    	if(arr[i]>k){
    		break;
    	}
    	count++;
    	if(count==n){
    		cout << count;
    		return;
    	}
    }
    for (int i = n-1; i >=  0; --i)
    {
    	if(arr[i]>k){
    		break;
    	}
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