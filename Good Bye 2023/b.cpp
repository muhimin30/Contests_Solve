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
	ll a, b; cin >> a >> b;

	int lcm = (a * b) /__gcd(a, b);
	
	if(lcm > b){
		cout << lcm << endl;
	}
	else{
		for(int i = 2; i <= sqrt(b) ; i++){
			if(b % i == 0){
				cout << b * i << endl;
				return;
			}
		}
		cout << b * b << endl;
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


