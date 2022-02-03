#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n,m, count=1;
    cin >> n >> m;
    int pos = m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
            {
                cout << "#";
            }
            if(i%2==0 && j==pos)
            {
                cout << "#";
                count++;
                
            }
            if(i%2==0 && j!=pos)
            {
                cout << ".";
            }
            
        }
        if(count%2==0)
        {
            pos = 1;
        }else{
            pos = m;
        }

        cout << endl;
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