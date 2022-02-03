#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int t; cin >> t;
    // int max_score = INT_MIN;
    // string winner;
    map<string, int> m1;
    //name, current_score
    map<string, int> m3; 
    //name, max_score     
    map<int, vector<string>> m2;
    //score, <name, name, name>
    // 5 <chahat, pranjal, aman>
    for(int i = 0; i < t; i++){
    	string str;
    	int score; 
    	cin >> str >> score;
    	m1[str] = m1[str]+score;
        m2[m1[str]].push_back(str);
        m3[str] = max(m1[str], m3[str]);
    }

    int maxx1 = INT_MIN;
    for(auto i:m1){
        if(i.second>maxx1){
            maxx1 = i.second;
        }

    }

    // for(auto i:m1){
    //     cout << i.first << " " << i.second << endl;
    // }
    // cout << endl;
    // int max_answer = INT_MIN;
    string winner_answer;
    // for(auto i:m2[max1]){
    //     if(m3[i]>max_answer){
    //         max_answer = m3[i];
    //         winner_answer = i;
    //     }
    // } 

    cout << m2[maxx1][0];  

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