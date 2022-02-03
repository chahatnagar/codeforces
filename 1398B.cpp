#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
	vector<int> v1;
    string s1;
    cin >> s1;
    int l = s1.length();
   	char prev = s1[0];
    int count=0;
    (prev=='1') ? count++ : count=0;
    if(l==1){
        v1.push_back(count);
    }
    for (int i = 1; i < l; ++i)
    {
    	if(s1[i]=='1' && prev=='1'){
    		count++;
    	}else if(s1[i]=='1' && prev=='0'){
    		count = 1;
    	}else if(s1[i]=='0' && prev=='1'){
    		v1.push_back(count);
    		count = 0;
    	}
    	prev = s1[i];
    	if(i==l-1){
    		v1.push_back(count);
    	}
    }

    sort(v1.begin(), v1.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < v1.size(); i+=2)
    {
    	sum+=v1[i];
    }

    cout << sum;

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