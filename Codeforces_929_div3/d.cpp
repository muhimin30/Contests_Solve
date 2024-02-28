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
	int mn = 1e9;
	vector<int> num(n);
	bool check = false;
	for(int i = 0; i < n; i++){
		cin >> num[i];
		mn = min(mn, num[i]);
		
	}

	int cnt = 0;
	for(int i = 0; i < n;i++){
		if(num[i] == mn){
			cnt++;
		}
		else{
			if(num[i] % mn){
				check = true;
			}
		}
	}

	if(cnt == 1 || check){
		cout << "YES" << endl;
	}
	else if(cnt == n){
		cout << "NO" << endl;
	}
	else{
		cout << "NO" << endl;
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


