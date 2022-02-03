#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    char arr1[30] = {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	char c; cin >> c;
	string s; cin >> s;
	if(c=='R'){
		for(int i = 0; i < s.size(); i++){
			for(int m = 0; m < 30; m++){
				if(arr1[m]==s[i]){
					cout << arr1[m-1];
				}
			}
		}
	}
	if(c=='L'){
		for(int i = 0; i < s.size(); i++){
			for(int m = 0; m < 30; m++){
				if(arr1[m]==s[i]){
					cout << arr1[m+1];
				}
			}
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