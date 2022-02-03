#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n;
	cin >> n;
    if(n/1000>=1)
    {
    	cout << 10*(n/1000);
    }else if(n/100>=1)
    {
    	cout << 10*((n/100)-1)+6;
    }else if(n/10>=1)
    {
    	cout << 10*((n/10)-1)+3;
    }else if(n<10)
    {
    	cout << 10*(n-1)+1;
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