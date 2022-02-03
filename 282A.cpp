#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, num=0;
    cin >> n;
    while(n--){
    	string s;
    	cin >> s;
    	if (s=="++X"){
    		++num;
    	}else if(s=="X++"){
    		num++;
    	}else if(s=="--X"){
    		--num;
    	}else if(s=="X--"){
    		num--;
    	}
    }
    cout << num;
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