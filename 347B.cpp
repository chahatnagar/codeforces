#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, count = 0;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin >> x;
    	if(x==i) count++;
    	else m[x] = i;
    }
    for(auto i : m){
    	// cout << i.first << " " << i.second << endl;
    	if(m[m[i.first]]==i.first){
    		cout << count+2;
    		return;
    	}
    }
    if(count==n){
    	cout << count;
    }else{
    	cout << count+1;
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