#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    char c;  cin >> c;
    int counts = 0, countf = 0;
    for (int i = 1; i < n; ++i)
    {
    	char c1; cin >> c1;
    	if(c!=c1 && c=='S'){
    		counts++;
    	}else if(c!=c1 && c=='F'){
    		countf++;
    	}
    	c = c1;
    }
    if(counts>countf){
    	cout << "YES";
    	return;
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