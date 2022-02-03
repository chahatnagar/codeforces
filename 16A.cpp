#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool issame(string s, int m){
	if(s.size()!=m){
		return false;
	}else{
		char prev = s[0];
		for(int i = 1; i < s.size(); i++){
			if(s[i]!=prev){
				return false;
			}
			prev = s[i];
		}
	}
	return true;
}
void solve(){
    int n, m; cin >> n >> m;
    string s1; cin >> s1;
    char prev1;
    if(issame(s1,m)){
    	prev1 = s1[0];
    }else{
    	cout << "NO";
    	return;
    }
    for(int i = 1; i < n; i++){
    	string s; cin >> s;
    	if(issame(s,m)==true && s[0]!=prev1){
    		prev1 = s[0];
    		continue;
    	}else{
    		cout << "NO";
    		return;
    	}
    }
    cout << "YES";
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