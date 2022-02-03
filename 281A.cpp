#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string word;
    string new_word;
    cin >> word;
    int l = word.length();
    for (int i=0;i<l;i++){
    	if(i==0){
    		if(word[0]>=97){
    			new_word+=char(word[0]-32);
    		}
    		else{
    			new_word+=word[0];
    		}
    	}else{
			new_word+=word[i];
    	}
    }
    cout << new_word << "\n";
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