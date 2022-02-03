#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a;
    cin >> a;
    if (a%2==0 && a!=2)
    {
        cout << "YES";
    }else{
        cout << "NO";
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