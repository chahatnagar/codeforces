#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1;
    for(int i = 1; i <= n; i++){
    	if(n%i==0) v1.push_back(i);
    }
    if(v1.size()%2){
    	cout << v1[(v1.size()/2)] << " " << v1[(v1.size()/2)]; 
    }else{
    	cout << v1[(v1.size()/2)-1] << " " << v1[(v1.size()/2)];
    }
    // cout << endl;
    // for(int i:v1){
    // 	cout << i << " ";
    // }
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