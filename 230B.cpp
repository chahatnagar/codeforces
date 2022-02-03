#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int int64_t
bool arr[(int)1000010];

void t_prime(){
    arr[0] = 0;
    arr[1] = 0;
    for(int i = 2; i < 1000010; i++){
        arr[i] = 1;
    }
    for (int i = 2; i <= (int)(sqrt(1000010)); i++)
    {
        if(arr[i]==1){
            
            for(int j = i*i; j < 1000010; j+=i){
                arr[j] = 0;
            }
        }
    }
}
void solve(){
    int n;
    cin >> n;
    t_prime();
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        int sqrt1 = sqrt(x);
        if(sqrt1*sqrt1==x && arr[sqrt1]){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
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
    solve();
    return 0;
}