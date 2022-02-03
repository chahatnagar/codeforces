#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;
    if(max({l1,l2,l3})-min({l1,l2,l3})==l1+l2+l3-max({l1,l2,l3})-min({l1,l2,l3})){
    	cout << "YES";
    	return;
    }
    else if(l1==l2 || l2==l3 || l1==l3){
    	if((l1==l2 and !(l3%2)) || (l1==l3 && !(l2%2)) || (l3==l2 && !(l1%2))){
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}