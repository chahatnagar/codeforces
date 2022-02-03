#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    string number; getline(cin, number);
    string s;
    for (int i = 0; i < n; ++i)
    {
    	getline(cin, s);
    	// cout << s;
    	if((s[s.size()-1]=='.' && s[s.size()-2]=='a' && s[s.size()-3]=='l' && s[s.size()-4]=='a' && s[s.size()-5]=='l') && (s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.')){
    		cout << "OMG>.< I don't know!" << endl;
    		continue;
    	}
    	if(s[0]=='m' && s[1]=='i' && s[2]=='a' && s[3]=='o' && s[4]=='.'){
    		cout << "Rainbow's" << endl;
    		continue;
    	}
    	if(s[s.size()-1]=='.' && s[s.size()-2]=='a' && s[s.size()-3]=='l' && s[s.size()-4]=='a' && s[s.size()-5]=='l'){
    		cout << "Freda's" << endl;
    		continue;
    	}

    	cout << "OMG>.< I don't know!" << endl;
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