#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
	int n; cin >> n;
	int i, op = 0;
	vector<string> v1(n);
	for (i = 0; i < n; ++i)
	{
		string s; cin >> s;
		if(s[0]=='O' && s[1]=='O' && op==0){
			op = 1;
			v1[i] = ("++"+s.substr(2,4));
		}else if(s[3]=='O' && s[4]=='O' && op==0){
			op = 1;
			v1[i] = (s.substr(0,3)+"++");
		}
		else{
			v1[i] = s;
		}
	}

	if(op==0){
		cout << "NO";
		return;
	}

	cout << "YES" << endl;
	int size1 = v1.size();
	for (int i = 0; i < size1; i++)
	{
		cout << v1[i] << endl;
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