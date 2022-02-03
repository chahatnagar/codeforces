#include <bits/stdc++.h>
using namespace std;
#define endl              "\n"
#define int               long long
#define rep(i,a,b)        for(int i=a;i<b;i++) 
void solve(){
    int n, sum;
    cin >> n;
    sum = (n*(n+1))/2;
    
    if(sum%2){
    	cout << 1;
    	return;
    }
    cout << 0;
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