#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int &i:arr){
        cin >> i;
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum+=arr[i];  
    }
    if(sum==m){
        cout << "YES";
    }else{
        cout << "NO";
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