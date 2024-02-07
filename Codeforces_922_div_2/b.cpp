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

	vector<pair<int, int>> num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i].first;
	} 	
	for(int i = 0; i < n; i++){
		cin >> num[i].second;
	} 

	sort(num.begin(), num.end());


	for(auto a: num) cout << a.first << ' ';	
	cout << endl;
	for(auto a: num) cout << a.second << ' ';	
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


