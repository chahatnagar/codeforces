#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n;
    vector<int> programmer, math, pe;
    cin >> n;
    for (int i = 1; i <=n; ++i)
    {
    	int n1; cin >> n1;
    	if(n1==1){
    		programmer.push_back(i);
    	}
    	if(n1==2){
    		math.push_back(i);
    	}
    	if(n1==3){
    		pe.push_back(i);
    	}
    }
    int a,b,c;
    a = programmer.size();
    b = math.size();
    c = pe.size();

    int num = min(a,min(b,c));

    if (num)
    {	
    	cout << num << endl;
    	for(int i=0;i<num;i++)
    	{
    		cout << programmer[i] << " " << math[i] << " " << pe[i] << endl;
    	}
    }else{
    	cout << 0;
    }

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