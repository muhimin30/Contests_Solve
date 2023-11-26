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
		int a, b , c; cin >> a >> b >> c;

		bool a_check = false;
		bool b_check = false;
		bool c_check = false;
		if(abs(a - b) % 2 == 0){
			c_check = true;
		}
		if(abs(a - c) % 2 == 0){
			b_check = true;
		}
		if(abs(c - b) % 2 == 0){
			a_check = true;
		}

		cout << a_check << ' ' << b_check << ' ' << c_check << endl;


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


