#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b; cin >> a >> b;
    int c = abs(a-b);
    int count = 0;
    if(c>4){
    	count+=(c/5);
    	c = c%5;
    }
    if(c==0){
    	cout << count;
    	return;
    }
    if(c==1 || c==2){
    	cout << count+1;
    	return;
    }
    if(c==3 || c==4){
    	cout << count+2;
    	return;
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