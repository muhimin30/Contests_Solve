//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
const ll md = 998244353;

void solve()
{
	ll a, b; cin >> a >> b;

	ll ans = a;
	for(int i = 0; i < b; i++){
		ans =( ans * b) % md;
	}	

	cout << (ans % md) << endl;


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


