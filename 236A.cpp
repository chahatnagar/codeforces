#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string name;
    int count = 0;
    cin >> name;
    int l = name.length();
    map<char, int> char_count;
    for(int i=0;i<l;i++){
        if(char_count[name[i]]==0){
            char_count[name[i]]++;
            count++;
        }
    }
    (count%2==0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
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
