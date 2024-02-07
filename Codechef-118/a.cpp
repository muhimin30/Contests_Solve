//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, k; cin >> n >> k;

	int gcd = n / k;

	vector<int> ans;
	for(int i = gcd; i <= n; i += gcd){
		ans.push_back(i);

		if(ans.size() == k){
			break;
		}
	}		

	for(auto a: ans) cout << a << ' ';
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


