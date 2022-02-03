#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    string s; cin >> s;

    if(n==1){
    	cout << s[0] << s[0];
    	return;
    }
    if(s[1]>=s[0]){
    	cout << s[0] << s[0];
    	return;
    }
    // string s; cin >> s;
    char chart1 = s[0];
    int ind = 0;
    for(int i = 1; i < s.size(); i++){
    	if(s[i]<=chart1){
    		ind++;
    		chart1 = s[i];
    	}else{
    		break;
    	}
    }

    for (int i = 0; i <= ind; i++)
    {
    	cout << s[i] << "";
    }
    for(int i = ind; i >= 0; i--){
    	cout << s[i];
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}