#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    int arr[101] = {0};
    int p, q;
    cin >> p;
    while(p--){
        int p1;cin >> p1;
        arr[p1] = 1;

    }
    cin >> q;
    while(q--){
        int q1; cin >> q1;
        arr[q1]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            cout << "Oh, my keyboard!";
            return;
        }
    }
    cout << "I become the guy.";
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