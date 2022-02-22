#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, x; 
    cin >> n;
    int min1 = INT_MAX, max1 = 0, min2 = 0, max2 = 0;
    for(int i = 0; i < n; i++)
    {
    	
    	cin >> x;
    	if(x>max1)
    	{
    		max1 = x;
    		max2 = 0;
    	}

    	if(x<min1)
    	{
    		min1 = x;
    		min2 = 0;
    	}

    	if(x==max1) max2++;
    	if(x==min1) min2++;

    }
    

    
    if(min1==max1)
    {
    	n = max2;
    	cout << max1-min1 << " " << ((n-1)*n)/2;	
    	return;
    }
    cout << max1-min1 << " " << min2*max2;	
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