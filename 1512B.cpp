#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n, c = 0;
    int y[2], y1[2];
    int x[2], x1[2];
    cin >> n;
    for (int i = 0; i < n*n; ++i)
    {
    	char s1; cin >> s1;
    	if(s1=='*'){
    		if(i<n){
    			y[c] = i;
    			x[c] = 0;
    			c++;
    		}
    		if(i>n){
    			y[c] = i%n;
    			x[c] = i/n;
    			c++;
    		}
    	}
    }
    

    if(x[1]-x[0]==0 && abs(y[1]-y[0])>0){
    	y1[0] = y[0];
    	y1[1] = y[1];
    	if(x[0]==n-1){
    		x1[0] = 1;
    		x1[1] = 1;
    	}else{
    		x1[0] = x[0]+1;
    		x1[1] = x[1]+1;
    	}
    }

    if(y[1]-y[0]==0 && abs(x[1]-x[0])>0){
    	x1[0] = x[0];
    	x1[1] = x[1];
    	if(y[0]==n-1){
    		y1[0] = 1;
    		y1[1] = 1;
    	}else{
    		y1[0] = y[0]+1;
    		y1[1] = y[1]+1;
    	}
    }

    

    // if(abs(x[1]-x[0])>0 && abs(y[1]-y[0])>0){
    // 	x1[0] = min(x[0], x[1]);
    // 	x1[1] = max(x[0], x[1]);

    // }
    for(int i=0;i<2;i++){
        cout << x[i] << " " << y[i] << endl;
    }
    for(int i=0;i<2;i++){
        cout << x1[i] << " " << y1[i] << endl;
    }

    // int count1 = 0, count2 = 0;
    // for (int i = 0; i < n; ++i)
    // {
    // 	for (int j = 0; j < n; ++j)
    // 	{
    // 		if(i==x[count1] && j==y[count1]){
    // 			cout << "*";
    // 			count1++;
    // 		}else if(i==x1[count2] && j==y1[count2]){
    // 			cout << "*";
    // 			count2++;
    // 		}else{
    // 			cout << ".";
    // 		}
    // 	}
    // 	cout << endl;
    // }

}
int32_t main()
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