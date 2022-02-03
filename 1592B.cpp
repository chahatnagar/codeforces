#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, x; cin >> n >> x;
    vector<int> v1(n);
    for(int &i:v1){
    	cin >> i;
    }
    vector<int> v2(n);
    v2 = v1;
    sort(v2.begin(), v2.end());
    int in1 = 0;
    int in2 = 0;
    int lin1 = v1.size()-1;
    int lin2 = v2.size()-1;
    while(v1[in1]==v2[in2]){
    	in1++;
    	in2++;
    }

    while(v1[lin1]==v2[lin2]){
    	lin1--;
    	lin2--;
    }
    if(abs(in1-lin1)<x){
    	cout << "NO";
    	return;
    }
    cout << "YES";

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