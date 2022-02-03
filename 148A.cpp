#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int k,l,m,n,d, count=0;
    cin >> k >> l >> m >> n >> d;
    for(int i=1;i<=d;i++){
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0){
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