#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
bool sortbyfirst(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first < b.first);
}
void solve(){
    int n;
    cin >> n;
    int arr[n][5];
    int arr1[n] = {0};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cin >> arr[i][j];
        }
    }
    if(n == 1){
        cout << 1;
        return;
    }
    // for(int k = 0; k < 5; ++k){
    //     vector<pair<int, int>> v;
    //     for(int i = 0; i < n; ++i){
    //         v.push_back({arr[i][k], i});
    //     }
    //     sort(v.begin(), v.end(), sortbyfirst);
    //     for(int f = 0; f < n; ++f){
    //         arr1[v[f].second] += n - f - 1; 
    //     //     cout << v[f].first << " " << v[f].second << endl;
    //     }
    //     // cout << endl << endl << endl;
    // }
    for (int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            int ai = 0, aj = 0;
            for(int k = 0; k < 5; ++k){
                if(arr[i][k] < arr[j][k]){
                    ai++;
                }
                else{
                    aj++;
                }
            }
            if(ai > aj){
                arr1[i]++;
            }
            else{
                arr1[j]++;
            }
        }
    }
    int max_element = 0;
    int max_index = 0;
    int max_count = 0;
    for(int i = 0; i < n; ++i){
        arr1[i] = (arr1[i] / n) + !(arr1[i] % n == 0);
        // cout << arr1[i] << endl;
        if(arr1[i] >= max_element){
            max_element = arr1[i];
            max_index = i + 1;
            max_count++;
        }
    }
    if(max_index == 0 || max_count == n){
        cout << -1;
        return;
    }
    cout << max_index;
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