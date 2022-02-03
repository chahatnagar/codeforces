#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n; cin >> n;
    int arr[n];
    // map<int, int> m1;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	arr[i] = n1;
    }
    int next;
    for (int i = 1; i <= n; ++i)
    {
    	int count = 0;
        int main_curr = i;
    	int curr = i;
    	next = arr[i-1];
    	// cout << curr << "->" << next << endl;
    	while(curr!=next && count<n){
    		curr = next;
    		next = arr[curr-1];
    		// cout << curr << "->" << next << endl;
    		count++;
            if(count==2 && main_curr==next){
            cout << "YES";
            return;
            }
    	}

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