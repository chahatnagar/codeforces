#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, low=0, high=0, amazing=0;
    cin >> n;
    int firstnum;
    cin >> firstnum;
    high = low = firstnum;
    for(int i=1;i<n;i++)
    {
        int num1;
        cin >> num1;
        if (num1>high)
        {
            amazing++;
            high=num1;
        }
        if (num1<low)
        {
            amazing++;
            low=num1;
        }
    }

    cout << amazing;
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