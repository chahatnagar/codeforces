#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int z = 0, e = 0;
    for(char &i:s1){
    	if(i=='z'){
    		z++;
    	}if(i=='e'){
    		e++;
    	}
    }
    for (int i = 0; i < e-z; ++i)
    {
    	cout << 1 << " ";
    }
    for (int i = 0; i < z; ++i)
    {
    	cout << 0 << " ";
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