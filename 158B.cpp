#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    vector<int> v1(n);
    for(int &i:v1) cin >> i;
    sort(v1.begin(), v1.end());
    int ans = 0;
    int threec = 0, twoc = 0, onec = 0;
    for(int i:v1){
    	if(i==4) ans++;
    	if(i==3) threec++;
    	if(i==2) twoc++;
    	if(i==1) onec++;
    }

    if(onec>=threec){
    	ans+=(threec);
    	onec-=threec;
    	threec = 0;
    }else if(onec<threec){
        ans+=threec;
        onec = 0;
        threec = 0;

    }else if(onec==0){
    	ans+=threec;
    	threec = 0;
    }
    
    ans+=(twoc/2);
    twoc-=2*(twoc/2);
    if(onec>twoc && twoc>0 && onec>0){
        ans+=1;
        onec-=2;
    }else if(onec==0 && twoc==1) ans+=1;
    ans+=(onec/4);
    if(onec%4){
        ans++;
    }
    cout << ans;
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