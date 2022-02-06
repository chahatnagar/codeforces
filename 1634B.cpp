#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
int dp1[100001][10];
int dp2[100001][10];
// void ans1()
// {
// 	for (int i = 0; i < 100001; ++i)
// 	{
// 		for(int j = 0; j < 100001; j++)
// 		{
// 			dp1[i][j] = i+j;
// 			dp1[i][j] = i+j;
// 		}
// 	}

// }
// void ans2()
// {
// 	for (int i = 0; i < 100001; ++i)
// 	{
// 		for(int j = 0; j < 100001; j++)
// 		{
// 			dp2[i][j] = i^j;
// 			dp2[j][i] = j^i;
// 		}
// 	}

// }
bool help(int x, int n, int count, vector<int> &arr, int y)
{
	if(count==n)
	{
		if(x==y) return 1;
		else return 0;
	}

	int n1 = help(x+arr[count], n, count+1, arr, y);
	int n2 = help((x^(arr[count])), n, count+1, arr, y);
	bool ans = false;
	if(n1==1 || n2==1)
	{
		ans = true;
	}
	return ans;


}
void solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> arr(n);
    for(int &i : arr)
    {
    	cin >> i;
    }
    if(help(x, n, 0, arr, y))
    {
    	cout << "Alice";
    }else cout << "Bob";

    


}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // ans1();
    // ans2();
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