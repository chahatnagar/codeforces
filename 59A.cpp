#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    string word, new_word;
    cin >> word;
    int l = word.length();
    int lower=0, upper=0;
    for(int i=0;i<l;i++){
    	if(word[i]>=97){
    		lower++;
    	}else if(word[i]<97){
    		upper++;
    	}
    }
    if (lower>=upper){
    	for(int i=0;i<l;i++){
    		if(word[i]<97) {
    			new_word+=char(word[i]+32);
    		}else{
    			new_word+=word[i];
    		}
    	}
    }else if (upper>lower){
    	for(int i=0;i<l;i++){
    		if(word[i]>=97) {
    			new_word+=char(word[i]-32);
    		}else{
    			new_word+=word[i];
    		}
    	}
    }

    cout << new_word;
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
