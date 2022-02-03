#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n;
    cin >> n;
    vector<int> odd, even;
    while(n--){
    	int n1;
    	cin >> n1;
    	(n1%2==0) ? even.push_back(n1) : odd.push_back(n1);
    }
    for (std::vector<int>::iterator i = even.begin(); i != even.end(); ++i)
    {
    	cout << *i << " ";
    }
    for (std::vector<int>::iterator i = odd.begin(); i != odd.end(); ++i)
    {
    	cout << *i << " ";
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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