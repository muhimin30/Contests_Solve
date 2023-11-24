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

	int n, x; cin >> n >> x;

	vi num(n + 1);
	num[0] = 0;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	int mx = ((x - num.back()) * 2);


	for(int i = 1; i <= n; i++){
		int temp = num[i] - num[i - 1];

		if(temp > mx){
			mx = temp;
		}
	}

	cout << mx << endl;

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


