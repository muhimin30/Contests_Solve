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
	string a, b, c;
	cin >> a >> b >> c;

	bool check = true;
	for(int i = 0; i < n; i++){
		if((a[i] != c[i] && b[i] != c[i]) || (a[i] != c[i] && a[i] == b[i])){
			check = false;
		}
	}

	cout << ((check) ? "NO" : "YES") << endl;

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


