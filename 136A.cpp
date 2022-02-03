#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        int num1;cin >> num1;
        arr[num1-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
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