#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    string string1;
    cin >> string1;
    int a=0, d=0;
    for(int i=0;i<n;i++){
        if(string1[i]=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout << "Anton";
    }else if(d>a){
        cout << "Danik";
    }else{
        cout << "Friendship";
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