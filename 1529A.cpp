#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i : v){
        cin >> i;
    }
    sort(v.begin(), v.end());
    // for(int i : v){
    //     cout << i << " ";
    // }
    // cout << endl;
    int minmax = n - 1;
    for(int i = 0; i < n; ++i){
        if(v[i] > 0){
            minmax = i;
            break;
        }
    }
    if(minmax == 0){
        cout << 1;
        return;
    }
    if(v[minmax] <= 0){
        cout << n;
        return;
    }
    int f = minmax, b = minmax - 1, answer = 1;
    while(b >= 0){
        if(v[f] - v[b] >= v[minmax]){
            ++answer;
            f = b;
        }
        b--;
    }
    cout << answer+1;
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
    int testcases = 1;
    cin >> testcases;
    for(int testcasesloopvariable = 1; testcasesloopvariable <= testcases; ++testcasesloopvariable){
        solve();
        cout << endl;
    }
    return 0;
}