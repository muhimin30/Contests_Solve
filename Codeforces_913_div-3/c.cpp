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
		map<char, int> mp;
		for(int i = 0; i < n; i++){
			mp[s[i]]++;
		}
		int mx_dup = 0;
		char mx_dup_c;
		int single_cnt = 0;

		for(auto a: mp){

			if(a.second == 1){
				single_cnt++;
			}
			if(a.second > mx_dup){
				mx_dup = a.second;
				mx_dup_c = a.first;
			}
		}

		if(single_cnt >= mx_dup && n % 2 == 0){
			cout << 0 << endl;
			return;
		}
		for(auto a: mp){
			if(a.first != mx_dup_c){
				mx_dup -= a.second;
			}
		}

		//cout << n << endl;
		if(n % 2 == 1){
			//cout << "HELLO" << endl;
			cout << max(1, mx_dup) << endl;
		}
		else{
			cout << max(0, mx_dup) << endl;
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


