#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n; 
    vector<int> v1(n);
    for(auto &i:v1) cin >> i;
    if(n%2 && v1[0]%2 && v1[n-1]%2){
    	cout << "Yes";
    	return;
    } 
    if(n%2==0 || v1[0]%2==0 || v1[n-1]%2==0){
    	cout << "No";
    	return;
    }
    cout << "Yes";
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