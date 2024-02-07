//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';


void solve()
{
	int n , k; cin >> n >> k;

	int ans = 0;

	vector<int> div;

	for(int i = 1; i * i <= n; i++){
		if(n % i == 0){
			div.push_back(i);

			if(i * i != n){
				div.push_back(n / i);
			}
		}
	}

	sort(div.rbegin(), div.rend());

	int x = div.size();

	for(int i = 0; i < div.size(); i++){
		if(n / div[i] >= k){
			ans = div[i];
			break;
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


