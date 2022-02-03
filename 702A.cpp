#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, count = 1;
    cin >> n;
    int n1; cin >> n1;
    int prev = n1;
    int max1 = count;
    for (int i = 1; i < n; ++i)
    {
    	int n1; cin >> n1; 
    	if(n1>prev){
    		count++;
    	}else{
    		count = 1;
    	}
    	prev = n1;
    	max1 = max(count, max1);
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
    solve();
    return 0;
}