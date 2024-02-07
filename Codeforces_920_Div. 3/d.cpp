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
	int n, m; cin >> n >> m;

	vi a(n);
	vi b(m);

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());

	vi ans;
	int i = 0;
	ll sum = 0;
	while(1){
		int temp1 = abs(a.back() - b.back());
		int temp2 = abs(a[i] - b[i]);

		if(temp1 > temp2){
			ans.push_back(temp1);
			a.pop_back();
			b.pop_back();
		}
		else{
			ans.push_back(temp2);
			i++;
		}


		if(ans.size() == n)break;
	}

	for(auto a: ans) sum += 1LL * a;

	cout << sum << endl;

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


