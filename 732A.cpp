#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int k,r;
    cin >> k >> r;
    for(int i=1;i<100;i++)
    {
    	if(((i*k))%10==r || (i*k)%10==0){
    		cout << i;
    		break;
    	}
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
    solve();
    return 0;
}