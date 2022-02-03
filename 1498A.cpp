#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int sumofdigits(int n) {
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
void solve(){
    int n;
    cin >> n;
    if(__gcd(n,sumofdigits(n))>1){
        cout << n;
    }else if(__gcd(n+1,sumofdigits(n+1))>1){
        cout << n+1;
    }else if(__gcd(n+2,sumofdigits(n+2))>1){
        cout << n+2;
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