#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    int z = 0, o = 0;
    for(char c:s){
    	if(c=='1') o++;
    	if(c=='0') z++;
    }
    if(z!=o){
    	cout << 1 << endl << s;
    	return;
    }
    int o2 = 0, z2 = 0;
    for(int i = 1; i < s.size(); i++){
    	if(s[i]=='1') o2++;
    	if(s[i]=='0') z2++;
    }
    if(o2!=z2){
    	cout << 2 << endl;
    	cout << s[0] << " ";
    	for(int i = 1; i < s.size(); i++) cout << s[i];
    	return;
    }else{
    	cout << 2 << endl;
    	cout << s[0] << s[1] << " ";
    	for(int i = 2; i < s.size(); i++) cout << s[i];
    	return;
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