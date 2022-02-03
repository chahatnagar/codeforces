#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    if(n==999){
    	cout << 994;
    	return;
    }
    int m1 = n%7;
    if(m1==0)
    {
    	cout << n;
    	return;
    }

    int n1 = n-m1;
    int n2 = n+(7-m1);
    int s1 = n1/10;
    int s2 = n2/10;
    n/=10;

    if(s1==n)
    {
    	cout << n1;
    }else{
    	cout << n2;
    }

    



}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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