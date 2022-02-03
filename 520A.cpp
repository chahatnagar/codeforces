#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void solve(){
	map<int, int> lcount;
	int count=0;
	int n;cin >> n;
	string word; cin >> word;
	for(int i=0;i<n;i++)
	{
		if(word[i]<97)
		{
			int num = word[i]+32;
			if(lcount[num]==0)
			{
				count++;
				lcount[num]++;
			}
		}
		else if(word[i]>=97)
		{
			if(lcount[word[i]]==0)
			{
				count++;
				lcount[word[i]]++;
			}
		}
	}

	cout << count;

	(count==26) ? cout << "YES" : cout << "NO";
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