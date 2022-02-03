#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n;
    map<int,int> count;
    map<int, int> index;
    int arr[2] = {0};
    cin >> n;
    int n1; cin >> n1;
    arr[0] = n1;
    count[arr[0]]++;
    for (int i = 1; i < n; ++i)
    {
    	int n1;
    	cin >> n1;
    	if(arr[0]!=n1){
    		arr[1] = n1;
    	}
    	count[n1]++;
    	index[n1] = i;
    }
    if(count[arr[0]]==1) {
    	cout << index[arr[0]]+1;
    }else{
    	cout << index[arr[1]]+1;
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