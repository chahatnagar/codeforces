#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    if(min({a,b,c,d})==d){
    	cout << d*max(e,f);
    	return; 
    }
    int sum = 0;
   	if(e>f){
   		if(d>a){
   			d-=a;
   		}else{
   			cout << d*e;
   			return;
   		}
   		sum+= (a*e);
   		sum+=(min({d,b,c})*f);
   		cout << sum;
   		return;
   	} 
   	if(f>e){
   		if(d>min(b,c)){
   			d-=min(b,c);
   		}else{
   			cout << d*f;
   			return;
   		}
   		sum+= (min(b,c)*f);
   		sum+=(min(d,a)*e);
   		cout << sum;
   		return;
   	}
   	if(e==f){
   		if(min({a,b,c,d})==d){
   			cout << d*f;
   			return;
   		}
   		int sum = 0;
   		d-=a;
   		sum+=(a*e);
   		sum+=(min({b,c,d})*f);
   		cout << sum;

   		return; 
   	}
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
    solve();
    return 0;
}