#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
	map<int, int> m1;
    int n; cin >> n;
    vector<int> v1(n);
    for(int &i:v1){
    	cin >> i;
    }
    sort(v1.begin(), v1.end());
    for(int i = 1; i <= 1000; i++){
        m1[i] = 0;
    }
    for (int i = 0; i < v1.size(); ++i)
    {
        m1[v1[i]]++;
    }
    int sum = 0;
    for(auto i:m1){
        sum+=i.second;
    }
    // cout << sum << endl;
    for(auto &i:m1){
        int temps = sum;
        sum-=i.second;
        i.second = temps;
        
    }
    for(int i = 1000; i >= 1; i--){
        if(m1[i]>=i){
            cout << i;
            return;
        }
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