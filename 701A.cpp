#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    map<int, vector<int>> m1;
    map<int, int> m2;
    int arr[n]; 
    for(int &i:arr) cin >> i;
    for(int i = 0; i < n; i++){
    	m1[arr[i]].push_back(i+1);
    	m2[arr[i]]++;
    }
    sort(arr, arr+n);
    int l = n-1;
    // for(auto i:m1){
    // 	cout << i.first << " ";
    // 	for(auto si:i.second){
    // 		cout << si << " ";
    // 	}
    // 	cout << endl;
    // }
    for(int i = 0; i < n/2; i++){
    	if(arr[i]!=arr[l]){
    		cout << m1[arr[i]][m1[arr[i]].size()-1] << " " << m1[arr[l]][m1[arr[i]].size()-1] << endl;
			m1[arr[i]].pop_back();
			m1[arr[l]].pop_back();

    	}else if(arr[i]==arr[l]){
    		cout << m1[arr[i]][m2[arr[i]]-1] << " " << m1[arr[l]][m2[arr[l]]-2] << endl;
			m2[arr[i]]--;
    		m2[arr[l]]--;    		
    	}
    	l--;
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