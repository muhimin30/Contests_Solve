//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n; cin >> n;

	map<int, int> mp;

	ll sum = 0;
	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		sum += temp;
		mp[temp]++;
	}	

	if(sum % 3 == 0){
		cout << 0 << endl;
	}
	else{
		bool check = false;

		for(auto a: mp){
			if((sum - a.first) % 3 == 0){
				check = true;
				break;
			}
		}

		if(check || (sum + 1) % 3 == 0){
			cout << 1 << endl;
		}
		else{
			cout << 2 << endl;
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


