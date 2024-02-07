//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, k; cin >> n >> k;
	string ans;
	char ch = 'a';
	for(int i = 0; i < k; i++){
		ans.push_back(ch);
		ch++;
	}

	for(int i = 0; i < n; i++){
		cout << ans;
	}	
	cout << endl;


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


