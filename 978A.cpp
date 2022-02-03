#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    int n; cin >> n;
    map<int, int> m1;
    int count = 0;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	arr[i] = n1;
    	m1[n1]++;
    	if(m1[n1]==1) count++;
    }
    cout << count << endl;
    for (int i = 0; i < n; ++i)
    {
    	if(m1[arr[i]]>1){
    		m1[arr[i]]--;
    	}else if(m1[arr[i]]==1){
    		cout << arr[i] << " ";
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