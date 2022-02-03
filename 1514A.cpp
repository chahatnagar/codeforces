#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
bool isPerfectSquare(int x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        int sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
void solve(){
    int n, odd = 0, even = 0;
    cin >> n;
    if(n==2){
    	int a, b; cin >> a >> b;
    	if(isPerfectSquare(a*b) && (isPerfectSquare(a) && isPerfectSquare(b))){
    		cout << "NO";
    		return;
    	}else{
    		cout << "YES";
    		return;
    	}
    }
    while(n--){
    	int n1; cin >> n1;
    	if(n1%2 && isPerfectSquare(n1)==false){
    		odd++;
    	}else if(isPerfectSquare(n1)==false){
    		even++;
    	}
    }
    if(odd>0 && (even>0 || odd>0)){
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}