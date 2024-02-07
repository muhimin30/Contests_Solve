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
	vi num1(n);		
	vi num2(m);

	for(int i = 0; i < n; i++){
		cin >> num1[i];
	}		
	for(int i = 0; i < m; i++){
		cin >> num2[i];
	}		


	sort(num2.rbegin(), num2.rend());

	int temp = n - num2[0];

	sort(num1.begin() + temp, num1.end());

	for(auto a: num1) cout << a <<' ';
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


