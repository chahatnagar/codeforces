#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n,x,t, count=0;
    cin >> n >> x >> t;
    vector<int> v1(n);
    for (int i = 0; i < n; ++i)
    {
    	v1[i] = i*x;
    }

    for (int i = 0; i < n; ++i)
    {
    	int end = v1[i]+t;
    	int endpos = upper_bound(v1.begin(), v1.end(), end)-v1.begin();
    	count+=endpos-i;
    }

    (count%2==0) ? cout << count/2 : cout << (count+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}