#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(3001, 0);

    for(int i = 0; i < n; i++)
    {
    	int x;
    	cin >> x;
    	v1[x] = 1;
    }

    for(int i = 1; i < 3001; i++)
    {
    	if(v1[i]==0)
    	{
    		cout << i;
    		return;
    	}
    }
    cout << 3001;

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