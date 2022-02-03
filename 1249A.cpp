#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n; cin >> n;
    if((n==1 || n==2 || n==3)){
    	if(n==2){
    		int n1, n2; cin >> n1 >> n2;
    		if(abs(n1-n2)<=1) cout << 2;
    		else cout << 1;
    		return;
    	}if(n==3){
    		int m1 = arr[n/2-1];
    		int m2 = arr[n/2];
    		int m3 = arr[n/2+1];
    	if(abs(m1-m2)>1 && abs(m2-m3)>1){
    		cout << n/2;
    		return;
    	}else{
    		cout << n/2+1;
    		return;
    	}
    	}
    	cout << 1;
    	return;
    }
    int arr[n];
    for(int &i:arr){
    	cin >> i;
    }
    sort(arr, arr+n);
    if(!n%2){
    	cout << n/2;
    	return;
    }
    if(n%2){
    	int m1 = arr[n/2-1];
    	int m2 = arr[n/2];
    	int m3 = arr[n/2+1];
    	if(abs(m1-m2)>1 && abs(m2-m3)>1){
    		cout << n/2;
    		return;
    	}else{
    		cout << n/2+1;
    		return;
    	}
    }


    cout << n/2;
    

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