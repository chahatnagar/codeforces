#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, count = 0, untreated = 0;
    cin >> n;
    while(n--)
    {
    	int n1;
    	cin >> n1;

    	if(n1<0 && count<=0)
    	{
    		untreated+=abs(n1);
    	}
    	if(n1<0 && count>=1){
    		count-=1;
    	}
    	if(n1>0)
    	{
    		count+=n1;
    	}

    }

    cout << untreated;

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