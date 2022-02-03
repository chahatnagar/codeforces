#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
bool check(string ss){
	deque<char> dq1;
	for(auto c:ss){
		dq1.push_front(c);
	}
	while(dq1.empty()!=1){
		if(dq1.front()==dq1.back()){
			dq1.pop_back();
			dq1.pop_front();
		}else return false;
	}
	return true;
}
void solve(){
    string s; cin >> s;
    string t = "";
    t+=s[0];
    t+=s[1];
    t+=s[3];
    t+=s[4];
    // cout << (t) << endl;
    int ans = 0;
    while(check(t)==false){
    	cout << t << endl;
    	if(stoi(t)==2359){
    		cout << ans+1;
    		return;
    	}
    	if(to_string(stoi(t)+1)[2]=='5' && to_string(stoi(t)+1)[3]=='9'){
    		if(to_string(stoi(t)+1)[1]=='9' && to_string(stoi(t)+1)[3]=='9'){
    			t[0] = to_string(t[0]-47);
    			t[1] = '0';
    			t[2] = '0';
    			t[3] = '0';
    		}else{
    			t[0] = t[0];
    			t[1] = to_string(t[1]-47);
    			t[2] = '0';
    			t[3] = '0';
    		}
    		cout << t << endl;
    	}
    	if(to_string(stoi(t)+1).size()==3){
    		string temp_t = "0";
    		temp_t+=to_string(stoi(t)+1)[0];
    		temp_t+=to_string(stoi(t)+1)[1];
    		temp_t+=to_string(stoi(t)+1)[2];
    		t = temp_t;
    	}
    	else t = to_string(stoi(t)+1);
    	ans++;
    }

    cout << ans;

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