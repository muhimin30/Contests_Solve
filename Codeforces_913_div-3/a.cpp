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
		string s; cin >> s;

		for(int i = 1; i <= 8; i++){
			if(s[1] - '0' == i){
				continue;
			}
			cout << s[0] << i << endl;
		}

		char c = 'a';
		for(int i = 1; i <= 8; i++){
			if(s[0] == c){
				c++;
				continue;
			}
			cout << c << s[1] << endl;
			c++;
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


