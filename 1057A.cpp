#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define N 200050
// #define int long long
vector<int> adj[N];
int parent[N];
void dfs(int s, int p){
	parent[s] = p;
	for(int e: adj[s]){
		if(e!=p){
			dfs(e, s);
		}
	}
}
void solve(){
    int n; cin >> n;
    for(int i = 0; i < n-1; i++){
    	int x; cin >> x;
    	adj[i+2].push_back(x);
    	adj[x].push_back(i+2);
    }

    dfs(1, -1);

    stack<int> s;
    while(1){
    	s.push(n);
    	n = parent[n];
    	if(n==-1) break;
    }

    while(!s.empty()){
    	cout << s.top() << " ";
    	s.pop();
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