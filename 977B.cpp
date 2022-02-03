#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    map<string, int> m1;
    for (int i = 0; i < n-1; ++i)
    {
    	string ss;
    	ss+=s[i];
    	ss+=s[i+1];
    	m1[ss]++;
    }
    string ss;
    int max1 = INT_MIN;
    for(auto i:m1){
    	if(i.second>max1){
    		max1 = i.second;
    		ss = i.first;
    	}
    }
    cout << ss;
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