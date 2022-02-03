#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    map<string, string> m1;
    m1["Power"] = "purple";
    m1["Time"] = "green";
    m1["Space"] = "blue";
    m1["Soul"] = "orange";
    m1["Reality"] = "red";
    m1["Mind"] = "yellow";
    int n; cin >> n;
    map<string, int> m2;
    for(int i = 0; i < n; i++){
    	string s1; cin >> s1;
    	m2[s1]  = 1;
    }
    cout << 6-n << endl;
    for(auto i:m1){
    	if(m2[i.second]){
    		continue;
    	}

    	cout << i.first << endl;
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