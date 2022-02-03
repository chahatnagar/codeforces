#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a, b, n=0;
    cin >> a >> b;
    while(a<=b){
    	a*=3;
    	b*=2;
    	n++;
    }

    cout << n;
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