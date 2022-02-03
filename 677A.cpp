#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, h, w=0;
    cin >> n >> h;
    for(int i=0;i<n;i++){
        int n1;
        cin >> n1;
        if(n1>h){
            w+=2;
        }else{
            w++;
        }
    }
    cout << w;
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