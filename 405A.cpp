#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    vector<int> v1(n);
    for(int &i:v1) cin >> i;
   	for(int i = 0; i < v1.size()-1; i++){
   		for(int j = 0; j < v1.size()-i-1; j++){
   			if(v1[j]>v1[j+1]){
   				int temp = v1[j];
   				v1[j] = v1[j+1];
   				v1[j+1] = temp;
   			}
   		}
   	}
   	for(int i:v1){
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
    solve();
    return 0;
}