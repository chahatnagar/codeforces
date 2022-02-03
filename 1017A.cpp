#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n; 
    vector<int> v1;
    int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
    int ts = (s1+s2+s3+s4);
    v1.push_back(ts);
    for (int i = 1; i < n; ++i)
    {
    	int s1, s2, s3, s4; cin >> s1 >> s2 >> s3 >> s4;
    	v1.push_back((s1+s2+s3+s4));

    }
    sort(v1.begin(), v1.end(), greater<int>());
    for(int i = 0; i < n; i++){
    	if(v1[i]==ts){
    		cout << i+1;
    		break;
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
    solve();
    return 0;
}