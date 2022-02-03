#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
bool isPrime(int data){
	bool flag = true;
	for(int i=2; i <= data/2; i++){
		if(data%i==0){
			flag = false;
			break;
		}
	}
	return flag;
}
void solve(){
    int n, m; cin >> n >> m;
    int np = 0;
    for(int i = n+1; i<= 50; i++){
    	if(isPrime(i)){
    		np = i;
    		break;
    	}
    }
    if(np==m){
    	cout << "YES";
    	return;
    }
    cout << "NO";

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