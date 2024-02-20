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
	string ans;
	if(n <= 28){
		char x = 'a' + (n - 3);
		ans += "aa";
		ans.push_back(x);
	}	
	else if(n <= 53){
		char x = ('a'+ (n - 28));
		ans += "za";
		ans.push_back(x);
	}
	else{
		char x = ('a'+ (n - 53)) ;
		ans += "zz";
		ans.push_back(x);
	}

	sort(ans.begin(), ans.end());
	cout << ans << endl;


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


