#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, a, b; cin >> n >> a >> b;
    if(abs(a-b)>1){
    	cout << -1;
    	return;
    }
   	if(b>a){
   		int c = 0;
   		int max1 = (n/2)+b;
   		int min1 = 1;
   		for (int i = 0; i < (2*b)+1; ++i)
   		{
   			// cout << 1 << endl;
   			if(c%2==0){
   				cout << max1 << " ";
   				max1--;
   			}
   			if(c%2){
   				cout << min1 << " ";
   				min1++;
   			}
   			c++;
   		}
   		for (int i = ((n/2)+b)+1; i <= n; ++i)
   		{
   			cout << i << " ";
   		}
   	}
    
    if(a>=b){
   		int c = 1;
   		int max1 = (n/2)+a;
   		cout << max1 << endl;
   		int min1 = 1;
   		for (int i = 0; i < (2*a)+1; ++i)
   		{
   			// cout << 1 << endl;
   			if(c%2==0){
   				cout << max1 << " ";
   				max1--;
   			}
   			if(c%2){
   				cout << min1 << " ";
   				min1++;
   			}
   			c++;
   		}
   		for (int i = ((n/2)+a)+1; i <= n; ++i)
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