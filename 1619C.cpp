#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
	stack<int> s, s2;
	int a1, a2, sum1;
    int a, sum; cin >> a >> sum;
    a1 = a;
    sum1 = sum;
    while(sum){
    	if((sum%10-a%10)<0){
    		s.push(sum%100-a%10);
    		sum/=100;
    	}else {
    		s.push(sum%10-a%10);
    		sum/=10;
    	}
    	a/=10;

    }
    int ans = s.top();
    s.pop();
    while(!s.empty()){
    	ans*=10;
    	ans+=s.top();
    	s.pop();
    }
    int ans2 = ans;
    // ans+=s.top();
    while(a1 && ans){
    	s2.push(a1%10+ans%10);
    	a1/=10;
    	ans/=10;
    }
    while(a1){
    	s2.push(a1%10);
    	a1/=10;
    }
    while(ans){
    	s2.push(ans%10);
    	ans/=10;
    }
    // while(!s2.empty()){
    // 	cout << s2.top() << " ";
    // 	s2.pop();
    // }
    int ans3 = s2.top();
    s2.pop();
    while(!s2.empty()){
    	if(s2.top()>=10){
    		ans3*=100;
    	}else{
    		ans3*=10;
    	}
    	ans3+=s2.top();
    	s2.pop();
    }
    if(sum1==ans3){
    	cout << ans2;
    }else{
    	cout << -1;
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