#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	string s; cin >> s;
	int k; cin >> k;
	if(s.size()<k){
		cout << "impossible";
		return;
	}
	set<char> s1;
	for(char c:s){
		s1.insert(c);
	}
	if(s1.size()>k){
		cout << 0;
	}else{
		cout << k-s1.size();
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