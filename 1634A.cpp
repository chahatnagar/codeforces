#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
bool isPalindrome(string s)
{
	int l = s.size()-1;
	for (int i = 0; i < s.size()/2; ++i)
	{
		if(s[i]!=s[l]) return false;
		l--;
	}

	return true;
}
void solve(){
    int n, m;
    cin >> n >> m;
    string s; cin >> s;
    if(m==0)
    {
    	cout << 1;
    	return;
    }
    if(isPalindrome(s)) cout <<  1;
    else cout << 2;

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