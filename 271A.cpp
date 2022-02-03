#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int num;
    int dist;
    cin >> num;
    for(int i=num+1;i<=9005;i++){
        int arr[10] = {0};
        dist = 0;
        int number = i;
        // cout << number << " ";
        while(number!=0){
            int d;
            d = number%10;
            // cout << d << " ";
            if(arr[d]==0){
                dist++;
                arr[d]++;
            }else if(arr[d]>1){
                break;
            }
            number = number/10;
        }
        // cout << dist << " " << endl;
        if(dist==4){
            cout << i;
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