#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long
void solve(){
    int n;
    int l = INT_MIN, r = INT_MAX, L, R;
    cin >> n;
    r = n-1;
    vector<int> v(n), vs(n);
    for(int &i : v)
    {
    	cin >> i;
    }
    vs = v;
    sort(vs.begin(), vs.end());
    // cout << "vs: ";
    // for(int i : vs)
    // {
    // 	cout << i << " ";
    // }
    // cout << endl;
    // cout << "v:  ";
    // for(int i : v)
    // {
    // 	cout << i << " ";
    // }
    // cout << endl;
    // cout << l  << " " << r << endl;
    if(vs==v)
    {
    	cout << "yes" << endl << 1 << " " << 1;
    	return;
    }
    for (int i = 0; i < n; ++i)
    {
    	if(v[i]!=vs[i] && l==INT_MIN)
    	{
    		l = i;
    	}
    	if(v[i]!=vs[i])
    	{
    		r = i;
    	}
    }
    L = l, R = r;
    while(l<r)
    {
    	int temp = v[r];
    	v[r] = v[l];
    	v[l] = temp;
    	l++;
    	r--;
    }
    // for(int i : v)
    // {
    // 	cout << i << " ";
    // }
    if(v==vs)
    {
    	cout << "yes" << endl << L+1 << " " << R+1;
    }else{
    	cout << "no";
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