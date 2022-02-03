#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;cin >> n;
    int arr[6] = {1, 5, 10, 20, 100,1000000001};
    int total_coins = 0;
    while(n!=0)
    {
    	for(int i=0;i<5;i++)
    	{
    		if(arr[i]<=n && arr[i+1]>n)
    		{
    			total_coins+=n/arr[i];
    			n = n%arr[i];
    		}
    	}
    }

    cout << total_coins;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}