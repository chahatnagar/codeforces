#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    map<char, int> num;
    string add;
    cin >> add;
    int length = add.length();
    for(int i=0;i<length;i++){

		if (add[i]=='1'){
			num[add[i]]++;
		}if (add[i]=='2'){
			num[add[i]]++;
		}if (add[i]=='3'){
			num[add[i]]++;
		}if (add[i]=='+'){
			continue;
		}
    }
    string output;
    if (num['1']>0){
    while(num['1']>0){
    	output+="1+";
    	num['1']--;
    }}
    if (num['2']>0){
    while(num['2']>0){
    	output+="2+";
    	num['2']--;
    }}
    if (num['3']>0){
    while(num['3']>0){
    	output+="3+";
    	num['3']--;
    }}

    output.erase(output.length()-1);
    cout << output;
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