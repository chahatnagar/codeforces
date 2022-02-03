#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, c; cin >> n >> c;
    int count = 0;
    int prev = 0;
    for (int i = 0; i < n; ++i)
    {
        int n1; cin >> n1;
        if(abs(prev-n1)>c){
            count = 0;
        }
        count++;
        prev = n1;
    }

    cout << count;
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