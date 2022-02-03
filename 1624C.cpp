#include "bits/stdc++.h"
using namespace std;

void solveit(){
    int n;
    cin >> n;
    long long arr[n];
    set<long long> s;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        while(arr[i] > n){
            arr[i] /= 2;
        }
        while(s.count(arr[i]) != 0 && arr[i] > 0){
        	arr[i] /= 2;
        }
        s.insert(arr[i]);
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; ++i){
        if(arr[i] < i + 1){
            break;
        }
        while(arr[i] > i + 1){
            arr[i] /= 2;
        }
        if(arr[i] != i + 1){
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
    	if(arr[i]!=i+1){
    		cout << "NO";
    		return;
    	}
    }
    cout << "YES";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int l;
    cin >> l;
    while(l--){
        solveit();
        cout << endl;
    }
    return 0;
}