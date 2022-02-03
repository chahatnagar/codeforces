#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;cin >> n;
    int free_room=0;
    while(n--){
        int p, q;
        cin >> p >> q;
        if(q-p>=2){
            free_room++;
        }
    }
    cout << free_room;
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