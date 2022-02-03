#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;cin >> n;
    while(n--){
        int n1;cin >> n1;
        if(n1==1){
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
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