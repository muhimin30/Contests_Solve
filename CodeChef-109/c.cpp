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

	int x_or = 0;
	for(int i = 0; i < n; i++){
		cin >> num[i];
		x_or ^= num[i];
	}
	int ans = x_or;
	for(int i = 0; i < n; i++){
		ans = min(ans, x_or ^ num[i]);
	}

	cout << ans << endl;

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


