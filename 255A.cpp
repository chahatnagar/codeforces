#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n, c = 0, back = 0, biceps = 0, ptr = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    	int n1; cin >> n1;
    	if(ptr==1){
    		c+=n1;
    		ptr++;
    	}else if(ptr==2){
    		biceps+=n1;
    		ptr++;
    	}else if(ptr==3){
    		back+=n1;
    		ptr=1;
    	}
    }
    if(max({c, biceps, back})==c) cout << "chest";
    if(max({c, biceps, back})==back) cout << "back";
    if(max({c, biceps, back})==biceps) cout << "biceps";

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