#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
    int n,k;
    cin >> n >> k;
    int arr1[n], arr2[n];

    for(int &i:arr1)
    {
    	cin >> i;
    }

    for(int &i:arr2)
    {
    	cin >> i;
    }

    sort(arr1,arr1+n);
    sort(arr2, arr2+n);

    int arr1sum = 0;
    for (int i = 0; i < n; ++i)
    {
    	arr1sum+=arr1[i];
    }

    if(arr1[0]<arr2[n-1])
    {
    	int max=arr1sum;
    	for (int j = 1; j <= k; ++j)
    	{
	    	int sum=0;
		    for(int i=j;i<n;i++)
		    {
		    	sum+=arr1[i];
		    }
		    for(int i=n-j;i<n;i++)
		    {
		    	sum+=arr2[i];
		    }
		    if(sum>max)
		    {
		    	max=sum;
		    }
    	}
    	cout << max;

	}
	else{
		cout << arr1sum;
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
    int t;
    cin >> t;
    while(t--){
        solve();
        cout << endl;
    }
    return 0;
}