#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string a;
    cin >> a;
    int l = a.length();
    if(l==2){
    	cout << a;
    	return;
    }
    for (int i = 0; i < l; ++i)
    {
    	if((i+1)%2!=0 || i==l-1)
    	{
    		cout << a[i];
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}