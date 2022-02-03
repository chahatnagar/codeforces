#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    for(char i:s){
    	if(i=='4' || i=='7') continue;
    	else{
    		cout << "NO";
    		return;
    	}
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n/2; i++){
    	if(s[i]=='4') sum1+=4;
    	else sum1+=7;
    }
    for(int i = n/2; i < s.size(); i++){
    	if(s[i]=='4') sum2+=4;
    	else sum2+=7;
    }
    if(sum1==sum2){
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