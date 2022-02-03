#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a,b;
    cin >> a >> b;
    int mini = min(a,b);
    int maxi = max(a,b);
    if(mini*2>=maxi) 
    {
        cout << (mini*2)*(mini*2);
    }else{
        cout << maxi*maxi;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}