#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, count = 0;
    // map <int, int> m1;
    map <int, int> list;
    cin >> n;
    while(n--){
    	int n1; cin >> n1;
    	// if(m1[n1]<2	&& list[n1+1]==0){
    	// 	count++;
    	// 	m1[n1]++;
    	// 	list[n1+1]++;
    	// }
    	// else if(m1[n1]<2 && list[n1]==0){
    	// 	count++;
    	// 	m1[n1]++;
    	// 	list[n1]++;
    	// }
    	if(list[n1]==0){
    		count++;
    		list[n1]++;
    	}else if(list[n1+1]==0){
    		count++;
    		list[n1+1]++;
    	}
    }

    cout << count;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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