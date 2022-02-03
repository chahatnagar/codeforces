#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int max1 = INT_MIN;
    int count = 0;
    int lac = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
    	char c; cin >> c;
    	if(c=='A' && lac==INT_MAX) lac = i;
    	else if(c=='P' && i>lac){
    		count++;
    		max1 = max(count, max1);
    	}else if(c=='A'){
    		max1 = max(count, max1);
    		count = 0;
    	}
    	
    }

    if(max1<0){
    	cout << 0;
    	return;
    }
    cout << max1;
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