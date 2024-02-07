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
	int n; ll charge, time, on_off; cin >> n >> charge >> time >> on_off;

	vector<ll> num(n + 1);

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	bool check = true;
	for(int i = 1; i <= n; i++){
		ll temp = num[i] - num[ i - 1];
		charge -= min(temp * time, on_off);

		//cout << temp << ' ' << charge << endl;
		if(charge <= 0) check = false;
	}

	cout << ((check) ? "YES" : "NO") << endl; 


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


