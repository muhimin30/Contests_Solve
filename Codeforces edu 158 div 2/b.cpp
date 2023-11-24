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
		
	int n; cin >> n;
	
	vi num(n + 1);
	
	num[0] = 1;
	//num[n + 1] = INT_MAX;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}

	ll cnt = 0;
	//int zero = 0;
	for(int i = 0;i < n; i++){
		if(num[i] < num[i + 1]){
			cnt += 1LL * (num[i + 1] - num[i]);
		}
	}


	cout << cnt << endl;



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


