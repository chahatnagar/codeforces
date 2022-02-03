#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    map<char, int> m;
    queue<char> q;
    for(int i = 0; i < s.size(); i++){
    	if(s[i]>=97 && s[i]<=122) {
    		m[s[i]]++;
    		q.push(s[i]);
    	}
    }
    int sp = 0;
    while(!q.empty()){
    	if(m[q.front()]>1){
    		cout << "<";
    	}else{
    		cout << "</";
    	}


    	if(m[q.front()>1]){
    		cout << ++sp;
    	}else if(m[q.front()]==1){
    		cout << --sp;
    	}


    	cout << q.front() << ">" << endl;
    	m[q.front()]--;
    	q.pop();
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