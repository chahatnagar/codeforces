#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string n;
    int lncount=0;
    cin >> n;
    int l = n.length();
    for(int i=0;i<l;i++){
        if(n[i]=='4' || n[i]=='7'){
            lncount++;
        }
    }
    if(lncount==7 || lncount==4){
        cout << "YES";
    }else{
        cout << "NO";
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