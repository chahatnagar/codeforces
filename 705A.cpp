#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    cin >> n;
    string output;
    for(int i=1;i<n;i++){
        if(i%2==0){
            output+="I love that ";
        }else{
            output+="I hate that ";
        }
    }
    if (n%2==0){
        output+="I love it";
    }else{
        output+="I hate it";
    }
    cout << output;
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