#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    string nm;
    cin >> nm;
    for (int i = 0; i < 5; ++i)
    {
    	string nm1;
    	cin >> nm1;
    	if(nm1[0]==nm[0] || nm1[1]==nm[1]){
    		cout << "YES";
    		return;
    	}
    }
    cout << "NO";


}
int32_t main()
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