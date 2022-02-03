#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int sum = n1 + n2 + n3 + n4;
    if((n1+n2==n3+n4) || (n1+n3==n2+n4) || (n1+n4==n2+n3)){
    	cout << "YES";
    	return;
    }else if(sum == 2*(max({n1,n2,n3,n4}))){
    	cout << "YES";
    	return;
    }
    cout << "NO";
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