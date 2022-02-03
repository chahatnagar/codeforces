#include <bits/stdc++.h>
using namespace std;
#define endl              "\n"
// #define int               long long
#define rep(i,a,b)        for(int i=a;i<b;i++) 
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<char> v1;
    int index = 0;
    int count = 0;
    for(char i:s){
    	v1.push_back(i);
    }
    sort(v1.begin(), v1.end());
    for(char i:v1){
    	if(s[index]!=i){
    		count++;
    	}
    	index++;
    }

    cout << count;
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