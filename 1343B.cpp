#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a;
    cin >> a;
    if((a/2)%2==0)
    {
    	cout << "YES" << endl;
    }else{
    	cout << "NO";
    	return;
    }
    for (int i = 2; i <= a; i+=2)
    {
    	cout << i << " ";
    }
    for (int i = 1; i <= a; i+=2)
    {
    	if (i+1==a){
    		cout << i+(2*(a/4));
    	}else{
    	cout << i << " ";
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