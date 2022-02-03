#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define endl "\n"
void solve(){
    int n, mincan=INT_MAX, minora=INT_MAX, sum=0;
    cin >> n;
    int arrcan[n];
    int arrora[n];
    for(int &i:arrcan)
    {
        cin >> i;
        if(i<mincan) mincan = i;
    }
    for(int &i:arrora)
    {
        cin >> i;
        if(i<minora) minora = i;
    }

    for (int i = 0; i < n; ++i)
    {
        int diffcan = arrcan[i]-mincan;
        int difforan = arrora[i]-minora;
        int maxgift = max(diffcan, difforan);

        if(difforan>0 && diffcan>0)
        {
            sum+=maxgift;
        }
        if(difforan>0 && diffcan==0)
        {
            sum+=difforan;
        }
        if(difforan==0 && diffcan>0)
        {
            sum+=diffcan;
        }

    }

    cout << sum;
}
signed main()
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