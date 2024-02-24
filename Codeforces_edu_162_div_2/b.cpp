//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	ll  n, k; cin >> n >> k;
	vector<ll> health(n + 1);
	vector<ll> monster(n + 1);
	for(ll i = 0; i < n; i++){
		cin >> health[i];
	}


	int mx = 0;
	for(ll i = 0; i < n; i++){
		int temp; cin >> temp;
		temp = abs(temp);
		monster[temp] += health[i];
	}
	
	ll reserve = k;
	bool check = true;
	for(int i = 1; i <= n; i++){
		if(reserve < monster[i]){
			//cout << i << ' ' << reserve << ' ' << monster[i] << endl;
			check = false;
			break;
		}
		else{
			reserve += (k - monster[i]);
		}
	}	

	cout << ((check)? "YES" : "NO") << endl;


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