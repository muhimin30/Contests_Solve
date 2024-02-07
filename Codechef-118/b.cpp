//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
		ll n, k; cin >> n >> k;
		vector<ll> num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		ll ans = 0, sum = 0;

		for(int i = 0; i < n; i++){
			sum += num[i];

			if(sum >= k){
				ans++;
				sum = 0;
			}
		}
		cout << ans << endl;


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


