#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n, k;
    cin >> n >> k;
    n+=1;
    int time_left = 240-k;
    while(n--)
    {
        int time_for_solving_problems = ((n)*((2*5)+(n-1)*5))/2;
        if (time_for_solving_problems<=time_left){
            cout << n;
            break;
        }
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