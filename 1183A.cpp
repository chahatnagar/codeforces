#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int sum(int n){
    int sum1 = 0;
    while(n){
        sum1+=(n%10);
        n/=10;
    }
    return sum1;
}
void solve(){
    int a; cin >> a;
    while(sum(a)%4!=0){a++;}
    cout << a;
    
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
    solve();
    return 0;
}