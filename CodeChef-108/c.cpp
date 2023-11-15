#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)

//const int mx = 300023;
void solve()
{
		
	int n; cin >> n;

	vi num[n + 1];

	set<int> unique_num;

	for(int i = 1; i <= n; i++){
		int temp; cin >> temp;
		unique_num.insert(temp);
		num[temp].push_back(i);
	}
	int mn = INT_MAX;
	int mn_num;
	
	// for(auto a: unique_num){
	// 	for(auto i : num[a]){
	// 		cout << i << ' ';
	// 	}
	// 	cout << endl;
	// }

	for(auto a: unique_num){
		int mx = num[a][0] - 1;
		for(int i = 1; i < num[a].size(); i++){
			int temp = (num[a][i] - num[a][i - 1]) / 2;
			mx = max(mx, temp);
		}
		mx = max(mx, n - (num[a][num[a].size() - 1]));

		if(num[a].size() == 2 && num[a].front() == 1 && num[a].back() == n){
			mx = (n - 1) / 2;
		}
		if(mx < mn){
			mn = mx;
			mn_num = a;
		}

		
		//mn = min(mn, mx);
	}
	
	cout << mn_num << ' ' << mn << endl;

}


int main()
{
		bismillah();

		tc
		{
				solve();
		}

}


