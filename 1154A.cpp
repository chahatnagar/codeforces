#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int arr[4];
    for(int &i:arr)
    {
        cin >> i;
    }
    sort(arr, arr+4);
    
    cout << arr[3]-arr[2] <<  " " << arr[3]-arr[1] << " " << arr[3]-arr[0];

}
int main()
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