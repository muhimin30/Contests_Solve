//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	ll a, b, r; cin >> a >> b >> r;
	ll ans;
	ll x = (a | b);
	if(r == 0){
		ans = a - b;
	}
	else{
		ans = ((a ^ x) - (b ^ x));
	}
	
	cout << (ans) << endl;	


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


