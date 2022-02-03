#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    char prev = s[0];
    cout << prev;
    int ans = 0, count = 1;
    for (int i = 1; i < s.size(); ++i)
    {
    	if(s[i]==prev && count==4){
    		ans++;
    		cout << s[i];
    		count = 0;
    		continue;
    	}else if(s[i]==prev && count<4 && count!=0){
    		cout << s[i];
    		count++;
    		continue;
    	}else if(s[i]!=prev){
    		ans++;
    		cout << endl << s[i];
    		count = 1;
    	}else if(s[i]==prev && count==0){
    		cout << endl << s[i];
    		count++;
    	}
    	prev = s[i];

    }
    cout << endl;
    (count>0) ? cout << ans+1 : cout << ans;
    
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