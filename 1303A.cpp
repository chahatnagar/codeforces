#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
	int l = 0, r = 0;
    string s1;
    cin >> s1;
    int n = s1.length();
    for(int i = 0;i<n;i++){
    	if(s1[i]=='1'){
    		l = i;
    		break;
    	}
    }
    for (int i = n-1; i >= 0; i--)
    {
    	if(s1[i]=='1'){
    		r = i;
    		break;
    	}
    }
    int c = 0;
    for (int i = l; i < r; ++i)
    {
    	if(s1[i]=='0') c++;
    }
    cout << c;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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