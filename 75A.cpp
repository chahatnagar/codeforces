#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int a, b; cin >> a >> b;
    int na = 0, nb = 0, nc = 0;
    int c = a+b;
    stack<int> a1, b1, c1;

    //c
    while(c){
    	c1.push(c%10);
    	c/=10;
    }
    
    while(!c1.empty()){
    	if(c1.top()!=0){
    		nc = (nc*10)+c1.top();
    	}
    	c1.pop();
    }
    // cout << nc;

    //a
    while(a){
    	a1.push(a%10);
    	a/=10;
    }
    
    while(!a1.empty()){
    	if(a1.top()!=0){
    		na = (na*10)+a1.top();
    	}
    	a1.pop();
    }

    //b
    while(b){
    	b1.push(b%10);
    	b/=10;
    }
    
    while(!b1.empty()){
    	if(b1.top()!=0){
    		nb = (nb*10)+b1.top();
    	}
    	b1.pop();
    }

    if(nc==na+nb){
    	cout << "YES";
    }else{
    	cout << "NO";
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