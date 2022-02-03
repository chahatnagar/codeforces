#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    map<int, int> m;
    bool flag = true;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	m[x]++;
    	if(x==50){
    		if(m[25]>=1){
    			m[25]--;
    		}else{
    			flag = false;
    		}
    	}
    	
    	if(x==100){
    		if(m[25]>=1 && m[50]>=1){
    			m[25]--;
    			m[50]--;
    		}
    		else if(m[25]>=3){
    			m[25]-=3;
    		}else{
    			flag = false;
    		}
    	}
    	// cout << x << " " << flag << endl;
    }

    if(flag){
    	cout << "YES";
    }else{
    	cout << "NO";
    }

    
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