#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int A, B, C; cin >> A >> B >> C;
    int D = A+C;
    if(D%2==0 && D/2>=B && (D/2)%B==0){
    	cout << "YES";
    }else{
    	if(((2*B)-C)>=A && (((2*B)-C)%A)==0){
    		cout << "YES";
    		return;
    	}else{
    		if((((2*B)-A)>=C) && (((2*B)-A)%C==0) && A==A*1){
    			cout << "YES";
    			return;
    		}else{
    			cout << "NO";
    			return;
    		}
    	}
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}