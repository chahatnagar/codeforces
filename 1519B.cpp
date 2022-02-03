#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m, k; cin >> n >> m >> k;
    
    int ans1 = 0, ans2 = 0;
    ans1+=1*(m-1);
    ans1+=m*(n-1);	

    ans2+=1*(n-1);
    ans2+=n*(m-1);	
    
    if(k==ans1 || k==ans2){
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}