#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
string ans = "NO";
bool isPalindrome(string s)
{
    int l = s.size()-1;
    for (int i = 0; i <= s.size()/2; ++i)
    {
        if(s[i]!=s[l]){
            return false;
        }
        l--;
    }
    return true;
}
void sub(vector<string> v, int pos = 0, string temp = "")
{
    if(pos==v.size())
    {
        if(isPalindrome(temp) && temp.size()>=1){
            ans = "YES";
        }
        return;
        
        
    }

    //include
    sub(v, pos+1, temp+v[pos]);
    //exclude
    sub(v, pos+1, temp);
}
void solve(){
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sub(v);
    cout << ans;
    ans = "NO";
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