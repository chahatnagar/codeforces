#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n, k,j=0;
    cin >> n >> k;
    map<int,int> count;
    int arr[k];
    for(int i=0;i<n;i++){
        int n1;
        cin >> n1;
        if(count[n1]==0){
            arr[j] = i+1;
            j++;
            count[n1]++;
        }
    }
    if(j<k){
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    for(int &i:arr){
        cout << i << " ";
    }
}
int32_t main()
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