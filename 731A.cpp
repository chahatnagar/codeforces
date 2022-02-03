#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
void solve(){
    string n; cin >> n;
    int count = 0;
    char prev = 'a';
    for(char i:n){
    	int min1 = min(abs(prev-i),(abs(97-min(prev,i))+abs(122-max(prev,i)))+1);
    	prev = i;
    	count+=min1;
    }
    cout << count;
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