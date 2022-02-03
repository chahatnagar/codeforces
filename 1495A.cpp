#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    cin >> n;
    priority_queue<long double> miners;
    priority_queue<long double> mines;

    // vector<double> miners;
    // vector<double> mines;
    for (int i = 0; i < 2*n; ++i)
    {
    	long long x, y; cin >> x >> y;
    	if(x==0){
    		miners.push(abs(y));
    	}else mines.push(abs(x));
    }
    // sort(mines.begin(), mines.end());
    // sort(miners.begin(), miners.end(), greater<int>());
    long double sum = 0;
    while(miners.size()>0)
    {
    	long double x1 = mines.top(), y1 = miners.top();
    	// double x1 = mines[i], y1= miners[i];
    	mines.pop();
    	miners.pop();
    	sum+= (sqrt((x1*x1)+(y1*y1)));
    }
    cout << setprecision(18) << sum;
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