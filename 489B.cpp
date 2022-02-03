#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
	int n, m;
	unordered_map<int, int> mmap;
	vector<int> nvec, mvec;
	cin >> n;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		nvec.push_back(x);
	}
	cin >> m;
	for(int i = 0; i < m; i++){
		int x; cin >> x;
		mvec.push_back(x);
		mmap[x]++;
	}
	sort(nvec.begin(), nvec.end());
	sort(mvec.begin(), mvec.end());
	int ans1 = 0;
	for(int i = 0; i < n; i++){
		if(mmap[nvec[i]-1]>=1){
			// cout << nvec[i]-1 << " " << nvec[i] << endl;
			ans1++;
			mmap[nvec[i]-1]--;
		}
		else if(mmap[nvec[i]]>=1){
			// cout << nvec[i] << " " << nvec[i] << endl;
			ans1++;
			mmap[nvec[i]]--;
		}
		else if(mmap[nvec[i]+1]>=1){
			// cout << nvec[i]+1 << " " << nvec[i] << endl;
			ans1++;
			mmap[nvec[i]+1]--;
		}
	}
	
	cout << ans1;



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