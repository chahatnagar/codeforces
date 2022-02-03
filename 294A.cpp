#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1(n);
    for(int &i:v1){
    	cin >> i;
    }
    int m; cin >> m;
    for(int i = 0; i < m; i++){
    	int x1, y1; cin >> x1 >> y1;
    	if(x1==1){
    		v1[x1]+=(v1[x1-1]-y1);
    		v1[x1-1] = 0;
    		continue;
    	}
    	if(x1==n){
    		v1[x1-2]+=(y1-1);
    		v1[x1-1] = 0;
    		continue;
    	}
    	v1[x1]+=(v1[x1-1]-y1);
    	v1[x1-2]+=(y1-1);
    	v1[x1-1] = 0;

    }

    for(int i:v1){
    	cout << i << endl;
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