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
	vector<pair<int, int>> num(4);

	for(int i = 0; i < 4; i++){
		cin >> num[i].first >> num[i].second;
	}	

	sort(num.begin(), num.end());

	ll ans = 0; 

	ans += abs(num[0].first - num[1].first) + abs(num[0].second - num[1].second);
	ans *= ans;

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


