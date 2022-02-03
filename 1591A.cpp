#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1(n);
    for(auto &i:v1){
    	cin >> i;
    }
    int h = 1;
    if(v1[0]==1) h++;
    for (int i = 1; i < n; ++i)
    {
    	if(v1[i-1]==0 && v1[i]==0){
    		cout << -1;
    		return;
    	}
    	if(v1[i]==1 && v1[i-1]==0) h++;
    	if(v1[i]==1 && v1[i-1]==1) h+=5;
    }
    cout << h;
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