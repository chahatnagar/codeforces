#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, m=0,c=0;
    cin >> n;
    while(n--)
    {
    	int mis, chris;
    	cin >> mis >> chris;
    	if(mis>chris) m++;
    	if(chris>mis) c++;
    }

    if(m>c) cout << "Mishka";
    if(c>m) cout << "Chris";
    if(c==m) cout << "Friendship is magic!^^";
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