#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    string ans = "";
    bool first = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i+=2;            
            ans+=' ';
            continue;
        }
        // if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' && s[i+3]!='W' && s[i+4]!='U' && s[i+5]!='B'){
        //     continue;
        // }
        ans+=s[i];
    	

    }
    stringstream ss(ans);
    string ma = "";
    ss >> ma;
    cout << ma << " ";
    while(ss >> ma){
        cout << ma << " ";
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