#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, k; cin >> n >> k;
    map<int, int> m1;
    map<int, int> m2;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	if(m1[n1]<k && m1[n1]!=-1){
    		if(n1==5) cout << m1[n1];
    		m1[n1]++;
    		m2[m1[n1]]++;
    		// cout << m2[m1[n1]] << " ";
    		if(m2[m1[n1]]>n/k && m1[n1]<k){
    			int ptr = 1;
    			while(m2[m1[n1]+ptr]>n/k){
    				ptr++;
    			}
    			m2[m1[n1]+ptr]++;
    			m1[n1] = m2[m1[n1]+ptr];
    			if(m1[n1]>k){
    				cout << 0 << " ";
    			}
    			// m2[m1[n1]+ptr]++;	

    		}
    		if(m1[n1]!=-1 && m1[n1]<=k){
    			cout << m1[n1] << " ";
    		}
    		// if(m1[n1]>=k) m1[n1]=-1;
    	}else if(m1[n1]==-1){
    		cout << 0 << " ";
    	}else{
    		// if(m2[m1[n1]]>n/k){
    		// 	int ptr = 1;
    		// 	while(m2[m1[n1]+ptr]>n/k){
    		// 		ptr++;
    		// 	}
    		// 	m1[n1] = m2[m1[n1]+ptr];
    		// 	if(m1[n1]>k){
    		// 		cout << 0;
    		// 	}else{
    		// 		cout << m1[n1] << " ";
    		// 	}
    		// }
    		// if(m1[n1]!=-1 && m1[n1]<=k){
    		// 	cout << m1[n1] << " ";
    		// }
    	}
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}