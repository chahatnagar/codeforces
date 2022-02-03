#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int req = n-10;
    if(req<=0){
    	cout << 0;
    	return;
    }
    if(req==10){
    	cout << 15;
    }else if(req<=9){
    	cout << 4;
    }else if(req==11){
    	cout << 4;
    }else{
    	cout << 0;
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
    solve();
    return 0;
}