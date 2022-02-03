#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
	map<char, int> m;
    string s; cin >> s;
    int n; cin >> n;
    vector<int> v(26);
    for (int i = 97; i < 123; ++i)
    {
    	int n; cin >> n;
    	m[i] = n;
    	v[i-97] = n;
    }
    sort(v.begin(), v.end(), greater<int>());
    // cout << m['d'];
    int sum = 0;
    for (int i = 0; i < s.size(); ++i)
    {
    	sum+=m[s[i]]*(i+1);
    }
    int size1 = s.size();
    int max1 = (((size1+n)*(size1+n+1))/2)-((size1)*(size1+1))/2;

    cout << sum+(max1*v[0]);
    

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