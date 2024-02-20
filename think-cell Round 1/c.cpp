//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n; cin >> n;

	vector<int> num(n);
	set<int> ans;
	for (int i = 0; i < n; ++i) {
			cin >> num[i];
	}

	int temp = 0;
	for (int i = n - 1; i >= 0; i--) {
		int add = i + 1;
		ans.insert(num[i] + add - temp);
		if (i > 0) {
			if ((num[i] + add) - (num[i - 1] + i) == 0) {
				temp++;
			}
		}
		else{
			temp = 0;
		}
	}

	vector<ll> v;
	for(auto a: ans) v.push_back(a);

	sort(v.rbegin(), v.rend());

	for(auto a: v) cout << a << ' ';
	cout << endl;

}


int main()
{
	bismillah();

	int t = 1;

	cin >> t;	
	while(t--){
		solve();
	}

}


