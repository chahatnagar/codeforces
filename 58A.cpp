#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    stack<char> s1;
    s1.push('o');
    s1.push('l');
    s1.push('l');
    s1.push('e');
    s1.push('h');
    for(auto c:s){
    	if(c==s1.top() && s1.empty()==0){
    		s1.pop();
    	}
    	if(s1.empty()){
    		cout << "YES";
    		return;
    	}
    }
    if(s1.empty()){
    	cout << "YES";
    }else{
    	cout << "NO";
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