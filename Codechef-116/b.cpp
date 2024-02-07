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
	string s; cin >> s;
	//cout << s << endl;

	int swip = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '1'){
			swip = x;
		}
		else if(s[i] == '0' && swip <= 0){
			cout << "NO" << endl;
			return;
		}
		else{
			swip--;
		}
		//cout << i << ' ' << swip << endl;
	}	

	cout << "YES" << endl;

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


