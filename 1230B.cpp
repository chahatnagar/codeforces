#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k;
    bool flag = true;
    vector<char> v; 
    string s;
    cin >> n >> k;
    cin >> s;


    for(int i : s)
    {
    	if(i!='0') v.push_back(i);
    }

    sort(v.begin(), v.end());
    sort(s.begin(), s.end());

    cout << v[0];	

    for(char c : s)
    {
    	if(flag && c==v[0])
    	{
    		flag = false;
    	}else{
    		cout << c;
    	}
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
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}