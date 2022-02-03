    #include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    string s; cin >> s;
    int l = s.length();
    if(l==1 && s[0]!='a'){
    	cout << "NO";
    	return;
    }else if(l==1 && s[0]=='a'){
    	cout << "YES";
    	return;
    }
    int lp, rp;
    if(s[0]>s[l-1]){
    	rp = l-1;
    	lp = 1;
    }else if(s[0]<s[l-1]){
    	lp = 0;
    	rp = l-2;
    }else if(s[0]==s[l-1]){
        cout << "NO";
        return;
    }
    int prev = max(s[0], s[l-1]);
    l--;
    // cout << lp << " " << rp << " ";
    while(l!=1){
    	if(s[rp]==prev-1){
            prev = s[rp];
    		rp--;
    	}else if(s[lp]==prev-1){
            prev = s[lp];
    		lp++;
    	}
    	l--;
    }
    if((s[rp]=='a' || s[lp]=='a') && prev == 'a'+1){
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}