#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; ++i)
    {
    	string s; cin >> s;
    	if(m[s]>0){
    		cout << s << m[s];
    		m[s]++;
    	}else{
    		cout << "OK";
    		m[s]++;
    	}
    	cout << endl;
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