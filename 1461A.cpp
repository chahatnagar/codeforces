#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    if(n == 3){
        if(k==3){
            cout << "aaa";
            return;
        }
        if(k==2){
            cout << "aab";
            return;
        }
        if(k==1){
            cout << "abc";
            return;
        }
    }
    int c = 1;
    for (int i = 0; i < n-k; i++)
    {
        if(c==1) cout << "a";
        if(c==2) cout << "b";
        if(c==3){
            cout << "c";
            c=1;
            continue;
        }
        c++;
    }
    for (int i = 0; i < k; ++i)
    {
        if(c==1){
            cout << "a";
        }
        if(c==2){
            cout << "b";
        }if(c==3){
            cout << "c";
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
    int t; cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    
    return 0;
}