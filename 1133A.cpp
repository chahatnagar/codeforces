#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    string s, e; 
    cin >> s >> e;

    string sh, sm, eh, em;
    sh += (s[0]);
    sh += s[1];

    eh += (e[0]);
    eh += e[1];

    sm += (s[3]);
    sm += s[4];

    em += (e[3]);
    em += e[4];

    int t1, t2, t3;
    t1 = stoi(sh)*60+stoi(sm);
    t2 = stoi(eh)*60+stoi(em);
    t3 = (t1+t2)/2;
    if(t3/60 < 10)
    {
        cout << "0";
    }
    cout << t3/60 << ":";
    if(t3%60 < 10){
        cout << "0";
    }
    cout << t3%60;
    
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