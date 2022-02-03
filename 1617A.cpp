#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
bool string_check(string s, string t){
	vector<char> v1;
	map<char, int> m1;
	int size1 = s.size();
	for (int i = 0; i < size1; i++)
	{
		if(m1[s[i]]==0 && (s[i]=='a' || s[i]=='b' || s[i]=='c')){
			v1.push_back(s[i]);
			m1[s[i]]++;
		}
	}
	string samp = "";
	for(auto i:v1){
		samp+=i;
	}
	// cout << samp << " " << t;
	if(samp==t){
		return true;
	}
	else{
		return false;
	}
}
void solve(){
    string s, t; cin >> s >> t;
    
    sort(s.begin(), s.end());
    // cout << string_check(s,t);
    if(t=="abc"){
    	while(string_check(s,t)){
    		next_permutation(s.begin(), s.end());
    	}
    	cout << s;
    }else{
    	cout << s;
    }
    
    
	// cout << s;
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