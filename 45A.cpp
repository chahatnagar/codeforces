#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s; cin >> s;
    int n; cin >> n;
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	n%=12;
	int sp = 0;
	for (int i = 0; i < 12; ++i)
	{
		if(months[i]==s){
			sp = i+1;
			break;
		}
	}
	cout << months[(n+sp>12) ? (n-(12-sp)-1) : sp+n-1];

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