#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, k, count=0;
    cin >> n >> k;
    while(n--)
    {
        int n1;
        cin >> n1;
        if(5-n1>=k)
        {
            count++;
        }
    }

    cout << count/3;
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