#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n, t; cin >> n >> t;
    queue<int> q1;
    map<int, int> m1;
    for (int i = 1; i <= n-1; ++i)
    {	
    	int x; cin >> x;
    	m1[i] = x;
    }
    q1.push(1);
    while(q1.empty()!=1){
    	// cout << q1.front() << " ";
    	if(q1.front()==t){
    		cout << "YES";
    		return;
    	}
    	if(q1.front()>t){
    		cout << "NO";
    		return;
    	}
    	q1.push(m1[q1.front()]+q1.front());
    	q1.pop();

    }
    cout << "NO";
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