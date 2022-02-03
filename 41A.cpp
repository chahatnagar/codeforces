#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int l = s1.length();
    int pointer = l-1;
    for(int i=0;i<l;i++){
        if(s1[i]!=s2[pointer]){
            cout << "NO";
            l = 10000;
            break;
        }
        pointer--;
    }
    if (l!=10000){
        cout << "YES";
    }
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