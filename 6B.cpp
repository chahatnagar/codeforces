#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; 
    char c; 
    cin >> n >> m >> c;
    char arr[n][m];
    set<char> s;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		if(arr[i][j]==c){
    			if(arr[i-1][j]>=65 && arr[i-1][j]<=90 && arr[i-1][j]!=c) s.insert(arr[i-1][j]);
    			if(arr[i+1][j]>=65 && arr[i+1][j]<=90 && arr[i][j+1]!=c) s.insert(arr[i+1][j]);
    			if(arr[i][j-1]>=65 && arr[i][j-1]<=90 && arr[i][j-1]!=c) s.insert(arr[i][j-1]);
    			if(arr[i][j+1]>=65 && arr[i][j+1]<=90 && arr[i][j+1]!=c) s.insert(arr[i][j+1]);
    		}
    	}
    }
    int count = 0;

    for(auto i : s){
        
    	if(i!=c){
            count++;
        }
    }
    cout << count;

    
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