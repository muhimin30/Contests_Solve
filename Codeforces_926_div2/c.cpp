//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define bug(x) cout << #x << ' ' << x << endl;

void solve()
{
	ll k, x, a; cin >> k >> x >> a;
	if(x >= a){
		cout << "NO" << endl;
		return;
	}
	ll temp = a / (x + 1);
	ll md = a % (x + 1);
	ll remain = a - (temp * x);

	remain += temp * k;
	remain += md;
	bug(remain);

	cout << ((remain >= a) ? "YES" : "NO") << endl;
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


