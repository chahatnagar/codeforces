#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, tram=0, max=0;
    cin >> n;
    for(int i=0;i<n;i++){
    	int a, b;
    	cin >> a >> b;
    	tram-=a;
    	tram+=b;
    	if (tram>max){
    		max = tram;
    	}
    }

    cout << max;
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