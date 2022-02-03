#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n,t=10,c=0;
    cin >> n;
    vector<int> v1;
    while(n!=0)
    {
    	if(n%t>0)
    	{
    		v1.push_back(n%t);
    		n/=t;
    		n*=t;
    		c++;
    	}else{
    		t*=10;
    	}
    }

    cout << c << endl;
    for (vector<int>::iterator i = v1.begin(); i != v1.end(); ++i)
    {
    	cout << *i << " ";
    }
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