#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
// #define int long long 
void solve(){
    int n; cin >> n;
    int count = 0;
    vector<int> v1;
    vector<int> v2;
    map<int, int> m1;
    for (int i = 0; i < n; i++) {
        int n1; cin >> n1;
        v1.push_back(n1);
        v2.push_back(n1);
        m1[n1]++;
    }
    int v1_size = v1.size();
    for (int i = 0; i < v1_size; i++) {
        for (int j = 0; j < v1_size; j++) {
            if(v1.size()>300){
                break;
            }
            if(m1[abs(v1[i]-v1[j])]==0 && i!=j){
                v1.push_back(abs(v1[i]-v1[j]));
                v1_size++;
                if(v1_size>300){
                	break;
                }
                // cout << abs(v1[i]-v1[j]) << " ";
                m1[abs(v1[i]-v1[j])] = 1;
            }
            if(m1[abs(v1[i]-v1[j])]==1 && i!=j){
        		count++;
        	}
            
        }
        if(v1_size>300){
                break;
        }
        
    }
    
    // cout << v1_size << " " << count << endl;
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    // for(int i:v2){
    //     cout << i << " ";
    // }

    if(v1.size()>300){
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    cout << v1.size() << endl;
    for (int i = 0; i < v1_size; i++) {
        cout << v1[i] << " ";
    }
    
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}