#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    string b; 
    cin >> n >> b;
    if(b[0]==1){
    	cout << 2;
    }else{
    	cout << 1;
    }
    for(int i = 1; i < b.size(); i++){
    	if(b[i]=='1' && (i%2==0)) cout << 1;
    	else if(b[i]=='1' && (i%2!=0)) cout << 0;
    	else if(b[i]=='0' && (i%2!=0)) cout << 1;
    	else if(b[i]=='0' && (i%2==0)) cout << 0;	

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