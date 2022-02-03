#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n; cin >> n;
    vector<pair<int, int>> v1(n);
    vector<int> v2;

    for (int i = 0; i < n; ++i)
    {
    	pair<int, int> p1;
    	int x; cin >> x;
    	p1.first = x;
    	p1.second = 0;
    	v1[i] = p1;
    }

    for (int i = 0; i < n; ++i)
    {
    	pair<int, int> p1;
    	int x; cin >> x;
    	v1[i].second = x;
    }
    int max1 = INT_MIN;
    int index = 0;
    int c = 0;
    for(auto i:v1){
    	if(max(i.first, i.second) > max1){
    		max1 = max(i.first, i.second);
    		index = c;
    	}
    	c++;
    }
    string winners = "";
    for (int i = 0; i < n; ++i)
    {

    	if(v1[i].first>=v1[index].first && v1[index].second==max1){
    		winners+="1";
    		continue;
    	}

    	if(v1[i].second>=v1[index].second && v1[index].first==max1){
    		winners+="1";
    		continue;
    	}

    	winners+="0";

    }

    cout << winners;
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