#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, k;
    cin >> n >> k;
    while(k--){
		if (n%10==0){
			n/=10;
		}else if(n%10!=0){
			n-=1;
		}	
    }
    cout << n;
}
int main()
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