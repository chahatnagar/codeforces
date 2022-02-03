#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int rounds(int health, int damage)
{
	return ((health/damage)+!(health%damage==0));
}
void solve(){
    int hp, ap; 
    cin >> hp >> ap;
    int hm, am; 
    cin >> hm >> am;

    int k, w, a; cin >> k >> w >> a;

    for (int i = 0; i <= k; ++i)
    {
    	int j = k-i;
    	int newhp = hp+(a*i);
    	int newap = ap+(w*j);
    	if(rounds(hm, newap)<=rounds(newhp,am))
    	{
    		// cout << newhp << " " << newap << " " << hm <<  " " << am;
    		cout << "YES";
    		return;
    	}
    }
    cout << "NO";
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