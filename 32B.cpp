#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    string code; cin >> code;
    int l = code.length();
    for (int i = 0; i < l; i++)
    {
    	if(code[i]=='.'){
    		cout << 0;
    	}else if(code[i]=='-' && code[i+1]=='-'){
    		cout << 2;
    		i++;
    	}else if(code[i]=='-' && code[i+1]=='.'){
    		cout << 1;
    		i++;
    	}
    }
}
int32_t main()
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