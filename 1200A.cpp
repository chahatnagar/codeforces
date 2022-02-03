#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int arr[10] = {0};
    for (int i = 0; i < n; ++i)
    {

    	char c = s[i];
    	// for(auto j:arr){
    	// 	cout << j;
    	// }
    	// cout << endl;
    	if(c=='L'){
    		for (int j = 0; j < 10; ++j)
    		{
    			if(arr[j]==0){
    				arr[j] = 1;
    				break;
    			}
    		}
    	}
    	else if(c=='R'){
    		for (int j = 9; j >= 0; j--)
    		{
    			if(arr[j]==0){
    				arr[j] = 1;
    				break;
    			}
    		}
    	}
    	else{
    		arr[c-48] = 0;
    	}


    }

    for (int i = 0; i < 10; ++i)
    {
    	cout << arr[i];
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