#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int ans = 0;
    int count = 0;
    while(n%2021!=0 && n>=2020){
    	n-=2020;
    	// cout << n << " ";
    	count++;
    }	
    if(n%2021==0){
    	cout << "YES";
    	return;
    }else{
    	cout << "NO";
    	return;
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