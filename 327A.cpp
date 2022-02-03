#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n), b(n);
    int zc = 0, oc = 0;
    int ans = INT_MIN, sum = 0;
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    	if(v[i]==0) zc++;
    	else oc++;
    }
    if(zc==0){
    	cout << oc-1;
    	return;
    }
    for (int i = 0; i < n; ++i)
    {
    	if(v[i]==0) sum++;
    	else sum--;
    	if(sum<0) sum = 0;

    	ans = max(sum, ans);
    }
    cout << oc+ans;

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