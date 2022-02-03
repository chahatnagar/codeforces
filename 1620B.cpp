#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int w, h, answer = 0;
    cin >> w >> h;
    for(int i = 1; i <= 4; ++i){
        int k, mini, maxi;
        cin >> k >> mini;
        k--;
        while(k--){
             cin >> maxi;
        }
        if(i < 3){
            answer = max(answer, (maxi - mini) * h);
        }
        else{
            answer = max(answer, (maxi - mini) * w);
        }
        // cout << maxi << " " << mini << endl;
    }
    cout << answer;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}