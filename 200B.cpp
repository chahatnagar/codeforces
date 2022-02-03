#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    double n, answer=0;
    cin >> n;
    for(int i=0;i<n;i++){
        int n1; cin >> n1;
        answer+=n1;
    }
    cout << setprecision(12) << answer/n;
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