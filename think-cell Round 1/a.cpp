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
	vector<int> num;

	for(int i = 0; i < (2 * n); i++){
		int temp; cin >> temp;
		num.push_back(temp);
	}
	ll sum = 0;
	sort(num.begin(), num.end());
	for(int i = 0; i < n; i++){
		int x = num.size();
		sum += num[x - 2];
		num.pop_back();
		num.pop_back();
	}


	cout << sum << endl;

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


