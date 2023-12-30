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

		vi num(n);

		for(int i = 0; i < n; i++){
			cin >> num[i];
		}

		bool check = false;

		ll first = 0, second = 0;
		if(n == 4){
			first = 1LL *  num[0] + num[1];
			second = 1LL * num[2] + num[3];

			//cout << first << ' ' << second << endl;
			if(first != second) check = true;
		}
		else{
			int all = 0;

			for(int i = 0; i < n; i++){
				if(num[i] == num[0]){
					all++;
				}
			}

			if(all != n) check = true;


		}

		cout << ((check)? "YES" : "NO") << endl;


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


