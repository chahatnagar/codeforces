#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    int d = 0;
    int mid = (n/2)+1;
    for(int i = 1; i <= (n/2)+1; i++){
    	for(int j = 1; j <= n; j++){
    		if(j==mid || abs(mid-j)<=d) cout << 'D';
    		else cout << '*';
    	}
    	cout << endl;
    	d++;
    }
    d-=2;

    for(int i = 1; i <= (n/2); i++){
    	for(int j = 1; j <= n; j++){
    		if(j==mid || abs(mid-j)<=d) cout << 'D';
    		else cout << '*';
    	}
    	cout << endl;
    	d--;
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