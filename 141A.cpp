#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string s1, s2, s3;
    map<char, int> s12;
    map<char, int> ss3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    int l1=s1.length();
    int l2=s2.length();
    int l3=s3.length();
    for(int i=0;i<l1;i++)
    {
        s12[s1[i]]++;
    }
    for(int i=0;i<l2;i++)
    {
        s12[s2[i]]++;
    }
    for(int i=0;i<l3;i++)
    {
        ss3[s3[i]]++;
    }
    for(int i=65;i<=90;i++)
    {
        if(ss3[char(i)]!=s12[char(i)]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
int main()
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