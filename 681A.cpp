#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	string name;
    	int n1, n2; 
    	cin >> name >> n1 >> n2;
    	if(n1>=2400 && n2>n1){
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
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}