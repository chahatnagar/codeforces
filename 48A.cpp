#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	string s = "";
	for (int i = 0; i < 3; ++i)
	{
		string a; cin >> a;
		s+=a[0];
	}
	if(s=="rss" || s=="spp" || s=="prr"){
		cout << "F";
	}else if(s=="srs" || s=="psp" || s=="rpr"){
		cout << "M";
	}else if(s=="ssr" || s=="pps" || s=="rrp"){
		cout << "S";
	}else{
		cout << "?";
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