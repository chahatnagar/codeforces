#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    string s, ss; cin >> s;
    ss = s;
    sort(ss.begin(), ss.end());
    // cout << "ss: " << ss << endl;
    // cout << "Ss: " << s << endl;
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
    	if(s[i]!=ss[i]) ans.push_back(i);
    }

    if(ans.size()==0){
    	cout << 0;
    	return;
    }else{
    	cout << 1 << endl << ans.size() << " ";
    }
   	for (int i = 0; i < ans.size(); ++i)
   	{
   		cout << ans[i]+1 << " ";
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