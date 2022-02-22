#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s;
    cin >> s;
    // int R = 0, G = 0, B = 0;
    int r = 0, g = 0, b = 0;
    bool flag = true;
    for(char c : s)
    {
    	if(c=='r') r++;
    	if(c=='g') g++;
    	if(c=='b') b++;

    	if((c=='R' && r==0) || (c=='G' && g==0) || (c=='B' && b==0))
    	{
    		flag = false;
    	}
    }

    if(flag)
    {
    	cout << "YES";
    }else{
    	cout << "NO";
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