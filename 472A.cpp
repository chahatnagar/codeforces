#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int iscomposite(int n){
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            return 1;
        }
    }
    return 0;
}
void solve(){
    int n;
    cin >> n;
    for(int i=4;i<n;i++)
    {
        if(iscomposite(i) && iscomposite(n-i))
        {
            cout << i << " " << n-i;
            break;
        }
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