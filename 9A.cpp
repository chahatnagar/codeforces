#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int y, x;
    cin >> y >> x;
    int fav_eve = (6-max(y,x))+1;
    int i = 2;
    if((fav_eve%i!=0 && 6%fav_eve!=0)){
    	cout << fav_eve << "/" << 6;
    	return;
    }
    if(fav_eve==6){
    	cout << 1 << "/" << 1;
    	return;
    }
    if(6%fav_eve==0){
    	cout << 1 << "/" << 6/fav_eve;
    	return;
    }
    while(fav_eve%i==0 && 6%i==0){
    	i++;
    }
    cout << fav_eve/(i-1) << "/" << 6/(i-1);
}
int32_t main()
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