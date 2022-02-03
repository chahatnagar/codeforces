#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    map<int,int> m1;
    set<int> s1;
    for (int i = 1; i <= n; ++i)
    {
        int n1; cin >> n1;
        if(n1==-1) m1[i] = 1;
       	else{
        	m1[i] = m1[n1]+1;
        }
    }
    int max1 = INT_MIN;
    for(auto i:m1){
    	s1.insert(i.second);
        // cout << i.first << " " << i.second << endl;
        
        
        // cout << curr << "->" << m1[curr] << endl;
        // cout << "Count: " << count << endl;
        max1 = max(i.second, max1);
    }
    int size = s1.size();
    cout << max(size, max1);

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