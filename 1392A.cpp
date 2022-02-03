#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n, count=1, sum,s=1;
    cin >> n;
    vector<int> v1(n);
    for(int &i:v1){
        cin >> i;
    }
    sum = v1[0];
    for (int i = 0; i < n-1; ++i)
    {
        if(sum!=v1[i+1]){
            sum+=v1[i+1];
            count++;
        }else{
            sum=v1[i+1];  
            s++;
        }
    }

    if(count==1){
        cout << s;
    }else{
        cout << 1;
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