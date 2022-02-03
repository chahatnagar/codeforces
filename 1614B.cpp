#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<pair<int,int>> v1;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	v1.push_back({n1,i});
    }

    sort(v1.rbegin(), v1.rend());
    int count = 0;
    int num = 1;
    int sum = 0;
    vector<int> v2(n);
   	for (int i = 0; i < n; ++i)
   	{
   		v2[v1[i].second] = num * ((count%2) ? 1 : -1);
   		sum+=(2*num*v1[i].first);
   		if(count%2){
   			num++;
   		}
   		count++;

   	}
   	cout << sum << endl << 0 << " ";
   	for(auto i:v2){
   		cout << i << " ";
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