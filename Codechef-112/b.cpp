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

		string s; cin >> s;

		int cnt = 0;
		int break_i;
		bool check = false;
		for(int i = 0; i < n - 1; i++){
			if(s[i] == '1'){
				cout << "IDK" << endl;
			}
			else if(s[i] == '0'){
				cout << "NO" << endl;
				break_i = i + 1;
				check = true;
				break;
			}
		}

		if(check){
			for(int i = break_i; i < n; i++){
				cout << "NO" << endl;
			}
		}
		else{
			if(s[n - 1] == '1'){
				cout << "YES" << endl;
			}
			else{
				cout << "NO" << endl;
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


