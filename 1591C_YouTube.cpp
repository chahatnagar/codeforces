#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, k; cin >> n >> k;
    
    vector<int> v1(n), neg, pos;

    for(int &i:v1){
    	cin >> i;
    }

    for(int i:v1){
    	if(i>=0) pos.push_back(i);
    	else neg.push_back(i);
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    vector<int> kstops;
    int p = pos.size();
    int q = neg.size();
    int curr;
    if(p>0){
    	curr = p-1;
    	kstops.push_back(pos[curr]);
    	curr-=k;
    	while(curr>=0){
    		kstops.push_back(pos[curr]);
    		curr -= k;

    	}
    }

    if(q>0){
    	curr = q-1;
    	kstops.push_back(-1*neg[curr]);
    	curr-=k;
    	while(curr>=0){
    		kstops.push_back(-1*neg[curr]);
    		curr -= k;
    		
    	}
    }
    int ans = 0;
    sort(kstops.begin(), kstops.end());
    int m = kstops.size();
    for (int i = 0; i < m-1; i++)
    {
    	ans+=(kstops[i]*2);
    }
    ans+=kstops[m-1];
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}