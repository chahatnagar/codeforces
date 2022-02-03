#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int m, b; cin >> m >> b;
    int ans = INT_MIN; 
    for (int i = 0; i <= 10000000; ++i)
    {
    	int temp_ans = 0;
    	if((((-1*i)/m)+b)>=0 && ((-1*i)+(m*b))%m==0){
    		int x = i, y = ((-1*i)+(m*b))/m;
    		// cout << i << " " << ((-1*i)/m)+b << ": ";
    		temp_ans+=((y*(y+1))/2)*(i+1);
    		temp_ans+=(y+1)*((x+1)*(x))/2;
    		ans = max(temp_ans, ans);
    		// cout << temp_ans << endl;
    		
    	}
    	
    }

    cout << ans;
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