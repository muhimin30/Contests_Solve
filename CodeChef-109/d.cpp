#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()

void solve()
{
		
	int n; cin >> n;

	vi num(n);
	vi even;
	vi odd;
	vi ans1;
	vi ans2;

	for(int i = 0; i < n; i++){
		cin >> num[i];
		if(num[i] % 2 == 0){
			even.push_back(num[i]);
		}
		else{
			odd.push_back(num[i]);
		}
	}

	if(odd.size() % 2 == 1){
		cout << -1 << endl;
		return;
	}

	sort(all(even));
	sort(all(odd));

	for(int i = 0, j = even.size() - 1; i < j; i++, j--){
		int a, b;

		a = (even[i] + even[j]) / 2;
		b = abs(even[i] - even[j]) / 2;

		ans1.push_back(a);
		ans2.push_back(b);
	}	

	for(int i = 0, j = odd.size() - 1; i < j; i++, j--){
		int a, b;

		a = (odd[i] + odd[j]) / 2;
		b = abs(odd[i] - odd[j]) / 2;

		ans1.push_back(a);
		ans2.push_back(b);
	}	

	for(auto a: ans1) cout << a << ' ';
	for(auto a: ans2) cout << a << ' ';

	cout << endl;

}


int main()
{
		bismillah();

		int tc = 1; 
		cin >> tc;

		while(tc--){
			solve();
		}

}


