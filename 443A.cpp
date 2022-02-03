#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    map<char, int> sf;
    int count=0;
    string set;
    getline(cin,set);
    stringstream ss(set);
    string w;
    while(ss>>w)
    {
        int l = w.length();
        for(int i=0;i<l;i++)
        {
            if(sf[w[i]]==0){
                count++;
                sf[w[i]]++;
            }
        }
    }

    (count<=3) ? (cout << count-2) : cout << count-3;
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