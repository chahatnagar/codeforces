#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
	vector<pair<int, int>> liked, disliked;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &i:v){
    	cin >> i;
    }
    string s; cin >> s;

    for (int i = 0; i < n; ++i)
    {
    	if(s[i]=='0'){
    		disliked.push_back({v[i], i});
    	}else{
    		liked.push_back({v[i], i});
    	}
    }

    sort(liked.begin(), liked.end());
    sort(disliked.begin(), disliked.end());
    int num = 1;
    vector<int> answer(n);
    for(auto i:disliked){
    	answer[i.second] = num;
    	num++;
    }
    for(auto i:liked){
    	answer[i.second] = num;
    	num++;
    }

    for(int i:answer){
    	cout << i << " ";
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