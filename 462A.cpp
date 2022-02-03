#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char> (n));
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
            char c; cin >> c;
    		s[i][j] = c;
    	}
    }

    for (int i = 0; i < n; i++)
    {
    	for (int j = 0; j < n; j++)
    	{
            int count = 0;
            if(s[i][j]=='o'){
                if((i-1)>=0 && s[i-1][j]!='o') count++;
                if((i+1)<n && s[i+1][j]!='o') count++;
                if((j-1)>=0 && s[i][j-1]!='o') count++;
                if((j+1)<n && s[i][j+1]!='o') count++;
                if(count%2){
                    cout << "NO";
                    return;
                }
            }

        
        		
            // cout << s[i][j] << " ";

    	}

    }
    cout << "YES";
    // if(!(s1.size()%2)){
    //     cout << "YES";
    // }else{
    //     cout << "NO";
    // }

    
    // cout << count << " ";
    // if(count%2){
    // 	cout << "NO";
    // }else{
    // 	cout << "YES";
    // }
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