#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, d; cin >> n >> d;
    vector<int> v1;
    for(int i=0;i<n;i++){
    	int n1; cin >> n1;
    	v1.push_back(n1);
    }
    sort(v1.begin(), v1.end());
    if(v1[n-1]<=d || v1[0]+v1[1]<=d){
    	cout << "YES";
    	return;
    }
    cout << "NO";

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