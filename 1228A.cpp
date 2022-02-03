#include <bits/stdc++.h>
using namespace std;
#define endl              "\n"
#define int               long long 
#define rep(i,a,b)        for(int i=a;i<b;i++)
void solve(){
    int n, m; cin >> n >> m;
    rep(i, n, m+1){
    	int count = 0;
    	set<int> s1;
    	int num = i;
    	while(num>0){
    		s1.insert(num%10);
    		num/=10;
    		count++;
    	}
    	if(s1.size()==count){
    		cout << i;
    		return;
    	}
    }
    cout << -1;
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