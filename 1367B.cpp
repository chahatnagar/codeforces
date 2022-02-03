#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, swap0=0, swap1=0;
    cin >> n;	
    for (int i = 0; i < n; ++i)
    {
    	int n1;
    	cin >> n1;
    	if(n1%2==0 && i%2!=0) swap1++;
    	if(n1%2!=0 && i%2==0) swap0++;
    }

    if(swap0==swap1)
    {
    	cout << swap0;
    }else{
    	cout << -1;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}