#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n; cin >> n;
	int sum=0;
	while(n--)
	{
		string s;cin >> s;
		if(s=="Tetrahedron"){
			sum+=4;
		}else if(s=="Cube"){
			sum+=6;
		}else if(s=="Octahedron"){
			sum+=8;
		}else if(s=="Dodecahedron"){
			sum+=12;
		}else if(s=="Icosahedron"){
			sum+=20;
		}
	}
	cout << sum;
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