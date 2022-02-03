#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    string s; cin >> s;
    int cnt = 0; 
    for(auto c:s){
        if(isupper(c)) cnt++;
    }
    if(cnt==s.size() || (cnt==s.size()-1 && islower(s[0]))){

        for (int i = 0; i < s.size(); ++i)
        {
            if(i==0 && s[i]>=97 && s[i]<=122){
                char c = s[i]-32;
                cout << c;
                continue;
            }
            if(i>=0 && s[i]>=65 && s[i]<=90){
                char c = s[i]+32;
                cout << c;
                continue;
            }
            
        }  
    }

    else cout << s;
    
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