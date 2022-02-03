#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, count = 0;
    cin >> n;
    string s; cin >> s;
    char prev = s[0];
    (prev=='x') ? count = 1 :  count = 0;
    vector<int> v1;
    for (int i = 1; i < n; ++i)
    {
    	if(s[i]=='x' && prev!='x'){
    		count=1;
    		prev = 'x';
    	}else if(s[i]=='x' && prev=='x'){
    		count++;
    		prev = 'x';
    	}else{
    		v1.push_back(count);
    		prev = s[i];
    		count = 0;
    	}
    }
    v1.push_back(count);
    int sum = 0;
    for(int i:v1){
    	if(i>2){
    		sum+=(i-2);
    	}
    }
    cout << sum;
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