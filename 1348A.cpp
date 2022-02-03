#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, asum=0, bsum=0, pow=2;
    cin >> n;
    for(int i=0;i<(n/2)-1;i++)
    {
        asum+=pow;
        pow*=2;
    }
    for(int i=(n/2)-1;i<n-1;i++)
    {
        bsum+=pow;
        pow*=2;
    }
    asum+=pow;

    cout << abs(asum-bsum);

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