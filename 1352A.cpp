#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n,i=1,rev,j=0;
    cin >> n;
    int arr[4];
    while(n>0)
    {
       
        rev=n%10;
        n=n/10;
        
        if(rev!=0)
        { 
            arr[j]=rev*(i);
          j++;
         }  
      i*=10;
    }
  cout<<j<<endl; 
  for(i=0;i<j;i++)
    cout<<arr[i]<<" ";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}