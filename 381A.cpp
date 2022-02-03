#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, s = 0, d = 0;
    cin >> n;
    int lp=0, rp=n-1;
    vector<int> v1(n);
    for(int &i:v1){
        cin >> i;
    }
    
    for (int i = 0; i < n; ++i)
    {
        if(i%2==0){
            if(v1[lp]>v1[rp]){
                s+=v1[lp];
                lp++;
            }else{
                s+=v1[rp];
                rp--;
            }
        }else{
            if(v1[lp]>v1[rp]){
                d+=v1[lp];
                lp++;
            }else{
                d+=v1[rp];
                rp--;
            }
        }
    }

    cout << s << " " << d;

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}