#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string s1, s2; 
    cin >> s1 >> s2;
    int length = s1.length();
    int val1, val2, check=0;
    for(int i=0;i<length;i++){
    	if (s1[i]<97){
    		val1 = s1[i]+32;
    	}else if(s1[i]>=97){
    		val1=s1[i];
    	}


    	if (s2[i]<97){
    		val2=s2[i]+32;
    	}else if(s2[i]>=97){
    		val2=s2[i];
    	}

	    if (val1<val2){
	    	cout << -1;
	    	check++;
	    	break;
	    }else if (val2<val1){
	    	cout << 1;
	    	check++;
	    	break;
	    }

	}
	if (check==0){
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