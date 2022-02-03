#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n, sum=0,count=0;
    cin >> n;
    while(n--){
        int n1;cin >> n1;
        sum+=n1;
        if(n1==1)
        {
            count++;
        }
    }
    if(sum%2!=0){
        cout << "NO";
        return;
    }
    if((sum/2)%2!=0 && count==0){
        cout << "NO";
        return;
    }
    cout << "YES";
}
int32_t main()
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