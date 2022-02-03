#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int &i:arr)
    {
        cin >> i;
    }
    sort(arr,arr+n);
    int answer=INT_MAX;
    for (int i = 0; i < n-1; ++i)
    {
        answer = min(answer, arr[i+1]-arr[i]);
    }

    cout << answer;

}
int main()
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