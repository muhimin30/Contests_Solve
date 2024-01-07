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
	ll n, k; cin >> n >> k;

	ll ans = 1;
	vector<ll> num(n);
	for(int i = 0; i < n; i++){
		cin >> num[i];
		ans *= num[i];
	}

	if(2023 % ans != 0){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
		cout << 2023 / ans << ' ';

		for(int i = 1; i < k; i++){
			cout << 1 << ' ';
		}
		cout << endl;
	}

	



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


