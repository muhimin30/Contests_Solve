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

	vector<int> num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}	

	int first = 0, last = 0;
	for(int i = 0; i < n; i++){
		if(num[i] == 1){
			first = i;
			break;
		}
	}	

	for(int i = n - 1; i >= 0; i--){
		if(num[i] == 1){
			last = i;
			break;
		}
	}


	int cnt = 0;


	for(int i = first; i <= last; i++){
		if(num[i] == 0){
			cnt++;
		}
	}

	cout << cnt << endl;


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


