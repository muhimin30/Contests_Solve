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
	char num[n + 1][n + 1];

	int one = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> num[i][j];
			if(num[i][j] == '1') one++;
		}
	}
	int mx = 0;
	for(int i = 0; i < n; i++){
		int l_one = 0;
		for(int j = 0; j < n; j++){
			if(num[i][j] == '1'){
				l_one++;
			}
		}
		mx = max(l_one, mx);
	}


	int temp = sqrt(one);
	//cout << mx << endl;
	if(mx == temp){
		cout << "SQUARE" << endl;
	}
	else{
		cout << "TRIANGLE" << endl;
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


