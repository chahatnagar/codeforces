#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, count=0;
    cin >> n;
    while(n--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a+b+c)>=2)
        {
            count++;
        }
    }
    cout << count;
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