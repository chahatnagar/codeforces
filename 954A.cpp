#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    int count = 0;
    char prev = s[0];
    for(int i = 1; i < s.size(); i++){
    	if(s[i]!=prev){
    		count++;
    		prev = s[i+1];
    		i++;
    		continue;
    	}
    	prev = s[i];


    	
    }
    cout << count+(s.size()-(2*count));
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