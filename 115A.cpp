#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    map<int,int> m1;
    for (int i = 1; i <= n; ++i)
    {
        int n1; cin >> n1;
        m1[i] = n1;
    }
    int max1 = INT_MIN;
    for(auto i:m1){
        // cout << i.first << " " << i.second << endl;
        int count = 1;
        int curr = i.first;
        while(m1[curr]!=-1){
            // cout << i.first << "->" << i.second << endl;
            curr = m1[curr];
            count++;
        }
        
        // cout << curr << "->" << m1[curr] << endl;
        // cout << "Count: " << count << endl;
        max1 = max(count, max1);
    }
    cout << max1;

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