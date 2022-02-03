#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string number1, number2, answer;
    cin >> number1 >> number2;
    int l=number1.length();
    for(int i=0;i<l;i++){
        if(number1[i]!=number2[i]){
            answer+='1';
        }else{
            answer+='0';
        }
    }
    cout << answer;
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