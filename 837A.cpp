#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1;
    int count = 0;
    string s; 
    cin.ignore();
    getline(cin, s);
    // cout << s << endl;
    for(char c:s){
        if(c>=65 && c<=90){
            count++;
        }
        if(c>=97 && c<=122){
            continue;
        }
        if(isspace(c)){
          v1.push_back(count);
            count = 0;  
        }
        
    }
    v1.push_back(count);

    int max1 = 0;
    for(int i:v1){
        max1 = max(max1, i);
    }
    cout << max1;
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