#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int a,b,c,n;
    cin >> a >> b >> c >> n;
    int answer = n-((max(a,max(b,c))*3)-(a+b+c));
    if(answer>=0 && answer%3==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
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