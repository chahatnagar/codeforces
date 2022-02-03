#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string num;
    cin >> num;
    int l = num.length();
    if(num[0]=='1')
    {
    	cout << 10;
    	for (int i = 2; i < l; ++i)
    	{
    		cout << num[i];
    	}
    }else{
    	cout << 1 << num;
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