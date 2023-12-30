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
		string a,b,c; cin >> a >> b >> c;
		int n = 'A' + 'B' + 'C';


		for(int i = 0; i < 3; i++){
			if(a[i] == '?'){
				char ans = n - (b[i] + c[i]);
				cout << ans << endl;
				return;
			}
			
		}
		for(int i = 0; i < 3; i++){
			if(b[i] == '?'){
				char ans = n - (a[i] + c[i]);
				cout << ans << endl;
				return;
			}
			
		}
		for(int i = 0; i < 3; i++){
			if(c[i] == '?'){
				char ans = n - (b[i] + a[i]);
				cout << ans << endl;
				return;
			}
		}
			


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


