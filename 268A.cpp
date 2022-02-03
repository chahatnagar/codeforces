#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	map<int, int> hu;
    int n, count=0; cin >> n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<2;j++)
    	{
    		cin >> arr[i][j];
    		(j==0) ? hu[arr[i][j]]++ : hu[arr[i][j]]+=0;

    	}
    }


    for(int i=0;i<n;i++)
    {
    	if(hu[arr[i][1]])
    	{
    		count+=hu[arr[i][1]];
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