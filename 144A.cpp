#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, min_index=0, max_index=0, max=0, min=101;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int num1;
        cin >> num1;
        if(num1>max){ 
            max_index = i+1;
            max = num1;
        }
        if(num1<=min){
            min_index = i+1;
            min = num1;    
        }
            
    }
    if(min_index-max_index<0){
        cout << (n-min_index)+(max_index-2);
    }else{
        cout << max_index+(n-min_index)-1;
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