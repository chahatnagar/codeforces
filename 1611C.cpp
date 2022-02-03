#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
void solve(){
    int n;
    cin >> n;
    deque<int> dq1;
    deque<int> dq1_1;
    for (int i = 0; i < n; ++i)
    {
    	int n1; cin >> n1;
    	dq1.push_back(n1);
    }
    dq1_1 = dq1;
    
    deque<int> dq2;
    dq2.push_back(max(dq1.front(), dq1.back()));
    if(dq1.front()>=dq1.back()){
    	dq1.pop_front();
    }else{
    	dq1.pop_back();
    }
    // cout << dq2.front() << endl;
    while(dq1.empty()!=1){
    	if(dq1.front()<dq1.back()){
    		dq2.push_front(dq1.front());
    		dq1.pop_front();
    	}else if(dq1.front()>=dq1.back()){
    		dq2.push_back(dq1.back());
    		dq1.pop_back();
    	}
    }

    deque<int> answer_dq3 = dq2;
    deque<int> dq4;
    while(dq2.size()>=2){
    	if(dq2.front()<dq2.back()){
    		dq4.push_front(dq2.front());
    		dq2.pop_front();
    	}else if(dq2.front()>=dq2.back()){
    		dq4.push_back(dq2.back());
    		dq2.pop_back();
    	}
    }
    int lst = dq2.front();
    dq4.push_back(lst);
    // for (auto it = dq4.begin(); it != dq4.end(); ++it)
    //     	cout << *it << " ";


    if(dq4==dq1_1){
    	for (auto it = answer_dq3.begin(); it != answer_dq3.end(); ++it)
        	cout << *it << " ";
        return;
    }
    dq4.pop_back();
    dq4.push_front(lst);
    if(dq4==dq1_1){
    	for (auto it = answer_dq3.begin(); it != answer_dq3.end(); ++it)
        	cout << *it << " ";
        return;
    }
    cout << -1;

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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}