#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int a;
    cin >> a;
    int arr[a][a];
    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if(i==0 || j==0){
                arr[i][j]=1;
            }else{
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
            }
        }
    }
    cout << arr[a-1][a-1];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}