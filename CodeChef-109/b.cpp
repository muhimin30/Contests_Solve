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
		
		int a, b ; cin >> a >> b;

		int mx = max(a, b);

		cout << (mx * 2) - 1 << endl;

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


