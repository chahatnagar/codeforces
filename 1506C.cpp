#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s1, s2; cin >> s1 >> s2;
    map<string, int> m1, m2;
    for (int i = 0; i < s1.size(); ++i)
    {
    	string sub = "";
    	for (int j = i; j < s1.size(); ++j)
    	{
    		sub+=s1[j];
    		m1[sub]++;
    	}
    }

    for (int i = 0; i < s2.size(); ++i)
    {
    	string sub = "";
    	for (int j = i; j < s2.size(); ++j)
    	{
    		sub+=s2[j];
    		m2[sub]++;
    	}
    }
    // string ans_str;
    int ans = 0;	
    // for(auto i : m1){
    // 	if(m2[i.first]==1){
    // 		cout << i.first << " " << i.first.size() << endl;
    // 	}
    // }
    
    for(auto s : m2){
    	if(m1[s.first]>=1 && s.first.size() > ans){
    		ans = s.first.size();
    		// ans_str = s.first;
    	}
    }

    cout << (s1.size()-ans)+(s2.size()-ans);
    
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