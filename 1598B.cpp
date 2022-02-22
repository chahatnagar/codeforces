#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int arr[n][5] = {0};
    bool ans = false;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            int a = 0, b = 0, both = 0;
            for (int k = 0; k < n; k++)
            {
                if(arr[k][i]==1 && arr[k][j]==1) both++;
                else if(arr[k][i]==1) a++;
                else if(arr[k][j]==1) b++;
            }
            int a1 = (n/2)-a, b1 = (n/2)-b;
            if(a1>=0 && b1>=0 && both==a1+b1)
            {
                ans = true;
                break;
            }
        }
        if(ans)
        {
            break;
        }
    }

    if(ans)
    {
        cout << "YES";
        return;
    }
    cout << "NO";



    
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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