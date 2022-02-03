#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    map<string, int> c;
    int count=0;
    for(int i=0;i<4;i++)
    {
    	string temps;
    	cin >> temps;
    	if (c[temps]==1)
    	{
    		count++;
    	}else{
    		c[temps]++;
    	}

    }
    cout << count;
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