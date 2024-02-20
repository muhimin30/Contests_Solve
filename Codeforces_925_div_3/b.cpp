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
	vector<ll> num(n);
	ll sum = 0;
	for(int i = 0; i < n; i++){
		cin >> num[i];
		sum += num[i];
	}	

	ll avarage = sum / n;
	reverse(num.begin(), num.end());

	ll extra = 0;
	for(int i = 0; i < n; i++){
		

		ll ntr = max(1LL * 0, num[i] - avarage);
		//cout << i << ' ' << ntr << ' ' << extra << endl;
		if(ntr > extra){
			cout << "NO" << endl;
			return;
		} 
		else{
			extra += max(1LL * 0, (avarage - num[i]));
			extra -= ntr;
		}
	}

	cout << "YES" << endl;
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


