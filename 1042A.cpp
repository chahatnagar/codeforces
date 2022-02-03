#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, m; 
    cin >> n >> m;
    vector<int> v(n);
    for(int &i : v)
    {
    	cin >> i;
    }

    int max1 = *max_element(v.begin(), v.end());
    int min1 = *min_element(v.begin(), v.end());

    if(min1==max1 && n>1)
    {
    	cout << min1+(m/n)+(m%n ? 1 : 0) << " " << m+max1;
    	return;
    }
    int sum = 0;
    for(int i : v)
    {
    	sum += (max1-i);
    }

    cout << min1+(m/n)+(m%n ? 1 : 0) << " " << max1+m;
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