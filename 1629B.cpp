#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}
void solve(){
	int l, r, k; cin >> l >> r >> k;
	if(l==r){
		if(__gcd(l,r)==1){
			cout << "NO";
		}else{
			cout << "YES";
		}
		return;
	}
	int length = (r-l)+1, o = (length/2)+((l%2==1) & (r%2==1));

	if(k>=o){
		cout << "YES";
	}else{
		cout << "NO";
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