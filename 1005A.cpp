#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
//#define int long long 
void solve(){
    int n, count=0;
    vector<int> v1;
    cin >> n;
    int arr[n];
    for(int &i:arr){
        cin >> i;
        if(i==1){
            count++;
        }
    }
    if(count==n){
        cout << n << endl;
        for (int i = 0; i < n; ++i)
        {
            cout << 1 << " ";
        }
        return;
    }
    count = 0;
    // int size1 = v1.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i+1]==1){
            v1.push_back(arr[i]);
            count++;
        }
        if(i==n-1){
            v1.push_back(arr[i]);
            count++;
        }
    }

    cout << count << endl;
   for (int i = 0; i < v1.size(); ++i)
   {
       cout << v1[i] << " ";
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