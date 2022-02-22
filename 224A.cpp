#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int A = a, B = b, C = c;
	
	A = (((((sqrt(a*b*c))/A))));
	B = (((((sqrt(a*b*c))/B))));
	C = (((((sqrt(a*b*c))/C))));
	// cout << A << " " << B << " " << C;
	cout << 4*(A+B+C);
// ((((sqrt(a*b*c))/b)))+((((sqrt(a*b*c))/c))));


    

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