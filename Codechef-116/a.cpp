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
	vector<char> num(10);

	for(int i = 0; i < 6;i++){
		cin >> num[i];
	}

	bool check = false;
	
	for(int i = 0; i <= 3; i++){
		if(num[i] == 'W' && num[i + 1] == 'W' && num[i + 2] == 'W'){
			check = true;
			break;
		}
	}

	cout << ((check) ? "YES" : "NO") << endl;
	
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


