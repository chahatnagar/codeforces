#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
const int NA = 1e3+5;
map<pair<int, int>, bool> m1;
map<pair<int, int>, int> ans;
pair<int, int> arr1[NA];
void check(int s, int e){
	if(s==e){
		ans[{s,e}] = s;
		return;
	}
	for (int i = s; i <= e; i++)
	{
		if(i==s){
			if(m1[{i+1, e}]){
				ans[{s, e}] = i;
				check(i+1, e);
				break;
				
			}
		}
		else if(i==e){
			if(m1[{s, i-1}]){
				ans[{s, e}] = i;
				check(s, i-1);
				break;
			}
		}else{
			if(m1[{s, i-1}] && m1[{i+1, e}]){
				ans[{s, e}] = i;
				check(s, i-1);
				check(i+1, e);
				break;
			}
		}
	}
}
void solve(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
    	int l, r; cin >> l >> r;
    	arr1[i].first = l, arr1[i].second = r;
    	m1[{l,r}] = true;
    }

    check(1, n);

    for(auto i:m1){

    	if(ans[i.first]>0){
    		cout << i.first.first << " " << i.first.second << " " << ans[i.first] << endl;
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