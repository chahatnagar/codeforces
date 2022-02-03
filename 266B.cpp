#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, t;
    cin >> n >> t;
    string queue, queue_new;
    cin >> queue;
    while(t--){
    	string tq;
    	for(int i=0;i<n;i++){
    		if(queue[i]=='B' && queue[i+1]=='G'){
    			queue_new+=queue[i+1];
    			queue_new+=queue[i];
    			i++;
    		}else{
    			queue_new+=queue[i];
    		}
    	}
    	queue = queue_new;
    	queue_new = "";

    }

    cout << queue;
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