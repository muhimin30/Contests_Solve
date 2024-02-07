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
	int greater = 0, smaller = 1e9 + 23;
	map<int, int> not_equal;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int a, b; cin >> a >> b;

		if(a == 1){
			greater = max(greater, b);
		}
		else if(a == 2){
			smaller = min(smaller, b);
		}
		else{
			not_equal[b]++;
		}
	}

	int cnt = 0;
	for(auto a: not_equal){
		if(a.first >= greater && a.first <= smaller){
			cnt++;
		}
	}

	ll ans = ((smaller - greater) + 1) - cnt;

	// while(greater <= smaller){
	// 	if(not_equal[greater] == 0){
	// 		ans++;
	// 	}
	// 	greater++;
	// }

	cout << max(1LL * 0, ans) << endl;

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


