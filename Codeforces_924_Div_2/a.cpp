//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int a, b; cin >> a >> b;

	if(a % 2 == 0 && b % 2 == 0){
		cout << "Yes" << endl;
		return;
	}	
	else if(a % 2 == 0 || b % 2 == 0){
		if(min(a, b) * 2 != max(a, b)){
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
	


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


