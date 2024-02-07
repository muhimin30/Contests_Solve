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
	string s; cin >> s;
	int first = -1, second = -1;
	for(int i = 0; i < n; i++){
		if(s[i] == 'B'){
			first = i;
			break;
		}
	}	
	for(int i = n - 1; i >= 0; i--){
		if(s[i] == 'B'){
			second = i;
			break;
		}
	}

	cout << (second - first) + 1 << endl;


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


