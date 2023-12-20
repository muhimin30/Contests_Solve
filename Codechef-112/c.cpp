#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;

#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

void solve()
{
		
	int n; cin >> n;

	vector<ll> num(n + 1);

	num[0] = 1;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	sort(num.begin(), num.end());

	int cnt = 0;

	ll sum = 0;
	for(int i = 0; i < n - 1; i++){
		sum += num[i];

		if(sum >= num[i + 1]){
			cnt++;
		}
	}


	for(auto a: num) cout << a << ' ';
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


