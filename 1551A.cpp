#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n; cin >> n;
    if(n%3==0){
    	cout << n/3 << " " << n/3;
    }else if(n%3==1){
    	cout << n/3+1 << " " << n/3;
    }else if(n%3==2){
    	cout << n/3 << " " << n/3+1;
    }
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}