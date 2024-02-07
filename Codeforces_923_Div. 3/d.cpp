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
	vector<int> num(n + 1);

	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	vector<int> ans(n + 1);

	for(int i = 1; i <= n; i++){
		ans[i] = i + 1;
	}

	for(int i = n - 1; i > 0; i--){
		if(num[i] == num[i + 1]){
			ans[i] = ans[i + 1];
			//cout << ans[i] << endl;
		}
	}
	int q; cin >> q;

	//  for(auto a: ans) cout << a << ' ';
	// cout << endl;

	while(q--){
		int a, b; cin >> a >> b;

		if(num[a] == num[b]){
			cout << ans[a] << ' ' << b << endl;
 			cout << -1 << ' ' << -1 << endl;
		}
		else{
			cout << a << ' ' << ans[a] << endl;
		}
	}

	cout << endl;


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


