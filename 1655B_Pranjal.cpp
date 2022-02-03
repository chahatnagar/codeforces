#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    int grid[200001][31];
    for(int i = 0; i < 31; ++i){
        grid[0][i] = 0;
    }
    for(int i = 1; i < 200001; ++i){
        for(int j = 0; j < 31; ++j){
            if((1 << j) & i){
                grid[i][j] = 1;
            }
            else{
                grid[i][j] = 0;
            }
            grid[i][j] += grid[i - 1][j];
        }
    }
    
    // for(int i = 0; i < 200001; ++i){
    //     for(int j = 0; j < 31; ++j){
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "HERE";
    int testcases;
    cin >> testcases;
    for(int tt = 1; tt <= testcases; ++tt){
        int l, r;
        cin >> l >> r;
        int count = (r - l + 1), answer = count;
        for(int i = 0; i < 31; ++i){
            answer = min(answer, count - (grid[r][i] - grid[l - 1][i]));
        }
        cout << answer << endl;
    }
    return 0;
}