#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    char arr[n];
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    for(int i=n-1;i>=0;i--){
    	if(arr[i]==')'){
    		count++;
    	}else{
    		break;
    	}
    }
    // cout << count;
    if(count>(n-count)){
    	cout << "Yes";
    	return;
    }
    cout << "No";
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