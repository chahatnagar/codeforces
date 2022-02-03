#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int x, y, z; cin >> x >> y >> z;
    if(x>y+z){
    	cout << "+";
    	return;
    }
    if(y>x+z){
    	cout << "-";
    	return;
    }
    if(x==y && y>0){
    	cout << "0";
    	return;
    }
    cout << "?";
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