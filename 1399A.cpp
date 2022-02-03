#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, count=0;
    cin >> n;
    if (n==1)
    { 
        int n1;cin>>n1;
        cout << "YES";
        return;
    }

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int ln;
    ln = arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]-ln>1)
        {
            count++;
            break;
        }
        ln = arr[i];
    }

    if(count==0) cout << "YES";
    if(count>0) cout << "NO";

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