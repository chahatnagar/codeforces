#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n, count=0;
	cin >> n;
    string stones;
    cin >> stones;
    for(int i=0;i<n-1;i++){
    	if(stones[i]==stones[i+1]){
    		count++;
    	}
    }
    cout << count << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
    return 0;
}