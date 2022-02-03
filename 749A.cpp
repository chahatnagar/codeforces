#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << endl;
        for (int i = 0; i < n/2; ++i)
        {
            cout << 2 << " ";
        }
    }else{
        cout << ((n-3)/2)+1 << endl;
        for (int i = 0; i < ((n-3)/2); ++i)
        {
            cout << 2 << " ";
        }
        cout << 3;  
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
    solve();
    return 0;
}