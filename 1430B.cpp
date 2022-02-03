#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    vector<int> b(n);
    for(int &i:b){
    	cin >> i;
    }
    int sum = 0;
    sort(b.begin(), b.end()	);
    int index = n-1;
    for (int i = 0; i <= k; ++i)
    {
    	sum += b[index];
    	index--;
    }
    cout << sum;
    
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