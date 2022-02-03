#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int &i:v1){
    	cin >> i;
    }
    for(int i = n-1; i >=0; i--){
        if(i==n-1) v2[i] = v1[i];
        else v2[i] = v1[i] + v1[i+1];
    }
    for(int i = 0; i < n; i++){
        cout << v2[i] << " ";
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
    solve();
    return 0;
}