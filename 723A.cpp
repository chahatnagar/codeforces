#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n=3, max=INT_MIN, min=INT_MAX;
	while(n--)
	{
		int n1;
		cin >> n1;
		if(n1>max)
		{
			max = n1;
		}
		if(n1<min)
		{
			min = n1;
		}
	}

	cout << max-min;


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