#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if((a+b>n-2) || abs(a-b)>1) 
    {
        cout << -1;
        return;
    }

    vector<int> ans(n);
    if(a > b)
    {
        int curr = n;
        for (int i = 1, cnt = 0; cnt < a; i+=2, cnt++)
        {
            ans[i] = curr;
            curr--;
        }
        int right = curr;
        curr = 1;
        for(int i = 2, cnt = 0; cnt < b; i+=2, cnt++)
        {
            ans[i] = curr;
            curr++; 
        }
        ans[0] = right--;
        for(int i = a+b+1; i < n; i++) ans[i] = right--;
    }
    else if(a < b){
        int curr = 1;
        for (int i = 1, cnt = 0; cnt < b; i+=2, cnt++)
        {
            ans[i] = curr; 
            curr++;
        }
        int left = curr;
        curr = n;
        for(int i = 2, cnt = 0; cnt < a; i+=2, cnt++)
        {
            ans[i] = curr;
            curr--;
        }

        ans[0] = left++;
        for(int i = a+b+1; i < n; i++) ans[i] = left++;
    }else{
        int curr = n;
        for(int i = 1, cnt = 0; cnt < a; i+=2, cnt++)
        {
            ans[i] = curr;
            curr--;
        }
        curr = 1;
        for(int i = 2, cnt = 0; cnt < b; i+=2, cnt++)
        {
            ans[i] = curr;
            curr++;
        }
        int left = curr;
        ans[0] = left++;
        for(int i = a+b+1; i < n; i++) ans[i] = left++;
    }

    for(int i = 0; i < n; i++) cout << ans[i] << " ";


    
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