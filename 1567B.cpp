#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int N = 3e5 + 5;
int ar[N]; 
void solve(){
    int a, b; 
    cin >> a >> b;
    int x = ar[a];
    
    if (x == b) cout << a;
    else if ((x ^ b) == a)
    cout << a + 2;
    else cout << a + 1;
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
    for (int i = 1; i < N; i++) {
    	ar[i] = ar[i - 1] ^ (i - 1);
    }
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}