#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	int n;
	cin >> n;

    int steps[6] = {1,2,3,4,5,1000001};
    int stepsint=0;
    while(n!=0){
        for(int i=1;i<6;i++){
            if (steps[i-1]<=n && steps[i]>n){
               stepsint+=(n/steps[i-1]);
                n = n%steps[i-1];
            }else {continue;}
        }
    }

    cout << stepsint;
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