#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int k, n, m, fp = 0, sp = 0;
    cin >> k >> n >> m;
    vector<int> v1(n), v2(m), ans;

    for(int &i : v1)
    {
    	cin >> i;
    }

    for(int &i : v2)
    {
    	cin >> i;
    }
    	
    
    bool flag = true;
   	while(fp < n || sp < m)
    {
    	if(fp < n && v1[fp]==0)
    	{
    		ans.push_back(0);
    		k++;
    		fp++;
    	}
    	else if(sp < m && v2[sp]==0){
    		ans.push_back(0);
    		k++;
    		sp++;
    	}else if(fp < n && v1[fp]<=k)
    	{
    		ans.push_back(v1[fp]);
    		fp++;
    	}else if(sp < m && v2[sp]<=k)
    	{
    		ans.push_back(v2[sp]);
    		sp++;
    	}else{
    		cout << -1;
    		flag = false;
    		break;
    	}
    }

    if(flag)
    {
    	for(int i : ans)
    	{
    		cout << i << " ";
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