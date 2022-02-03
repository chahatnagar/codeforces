#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; cin >> n >> m;
    bool flag = true;
    while(n && m){
    	if(n>m){
    		cout << 'B' << 'G';
    		flag = false;
    	}else{
    		cout << 'G' << 'B';
    	}
    	n--;
    	m--;
    }
    if(false)
    {
	    while(n){
	    	cout << 'B';
	    	n--;
	    }
	    while(m){
	    	cout << 'G';
	    	m--;
	    }
	}else{
		while(m){
	    	cout << 'G';
	    	m--;
	    }
	    while(n){
	    	cout << 'B';
	    	n--;
	    }
	}
}
signed main()
{
    // ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // #endif // ONLINE_JUDGE
    solve();
    return 0;
}