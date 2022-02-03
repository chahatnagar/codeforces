#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int r,c,i,j;
    int arr[5][5];
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin >> arr[i][j];
            if (arr[i][j]==1){
                r = i+1;
                c = j+1;
            }
        }
    }
    cout << abs(r-3)+abs(c-3);    
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