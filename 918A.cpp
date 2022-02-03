#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool isPerfectSquare(int x)
{
    if (x >= 0) {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isFib(int n){
	if(isPerfectSquare(5*(n*n)+4) || isPerfectSquare(5*(n*n)-4)){
		return true;
	}
	return false;
}
void solve(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
    	if(isFib(i)){
    		cout << 'O';
    	}else{
    		cout << 'o';
    	}
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
    solve();
    return 0;
}