#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int a,b,s=0;
    cin >> a >> b;
    int diff = abs(b-a);
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    while(diff!=0)
    {
    	for(int i=0;i<10;i++)
    	{
    		if(arr[i]<=diff)
    		{
    			s = s + diff/arr[i];
    			diff = diff%arr[i];
    		}
    	}
    }

    cout << s;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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