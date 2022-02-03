#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b; cin >> a >> b;
    int aw = 0, bw = 0, d = 0;
    for (int i = 1; i <= 6; ++i)
    {
    	if(abs(i-a)<abs(i-b)) aw++;
    	if(abs(i-a)>abs(i-b)) bw++;
    	if(abs(i-a)==abs(i-b)) d++;
    }
    cout << aw << " " << d << " " << bw;
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