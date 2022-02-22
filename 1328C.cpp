#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, ind; cin >> n;
    string x, a = "1", b = "1"; 
    cin >> x;
   


    for(int i = 1; i < n; i++)
    {
    	
    	if(x[i]=='0')
    	{
    		a.push_back('0');
    		b.push_back('0');
    	}else if(x[i]=='1')
    	{
    		a.push_back('1');
    		b.push_back('0');
    		ind = i;
    		break;
    	}else{
    		a.push_back('1');
    		b.push_back('1');
    	}
    	
    }

    for(int i = ind+1; i < n; i++)
    {
    	if(x[i]=='0')
    	{
    		a.push_back('0');
    		b.push_back('0');
    	}else if(x[i]=='1')
    	{
    		a.push_back('0');
    		b.push_back('1');
    	}else
    	{
    		a.push_back('0');
    		b.push_back('2');
    	}
    }

    cout << a << endl << b;

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