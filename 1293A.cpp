#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, s, k; 
    cin >> n >> s >> k;
    int max1 = -1, min1 = -1;
    bool f[n+1] = {0};

    for (int i = 0; i < k; i++
)    {
    	int x; 
    	cin >> x;
    	f[x] = 1;
    }
    if(f[s]==0)
    {
    	cout << 0;
    	return;
    }
    for(int i = s; i >= 1; i--)
    {
    	if(f[i]==0)
    	{
    		min1 = i;
    		break;
    	}
    }


    for(int i = s+1; i <= n; i++)
    {
    	if(f[i]==0)
    	{
    		max1 = i;
    		break;
    	}
    }
    if(s-min1<max1-s)
    {
    	if(min1!=-1)
    	{
    		cout << s-min1;
    		return;
    	}else{
    		min1 = max1;
    	}
    }

    if(s-min1>=max1-s)
    {
    	if(max1!=-1)
    	{
    		cout << max1-s;
    	}
    }
    // cout << min1 << " " << max1;
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