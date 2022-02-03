#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<int> v;
    int a = 0, b = 1, sum = 0;
    v.push_back(0);
    v.push_back(1);
    while(sum!=n){
    	sum = a+b;
    	v.push_back(sum);
    	a = b;
    	b = sum;
    }
    if(n==2){
    	cout << 1 << " " << 1 << " " << 0;
    	return;
    }else if(n==1){
    	cout << 1 << " " << 0 << " " << 0;
    	return;
    }else if(n==0){
    	cout << 0 << " " << 0 << " " << 0;
    	return;
    }
   	cout << v[v.size()-2] << " " << v[v.size()-4] << " " << v[v.size()-5];
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