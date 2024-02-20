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

	int cnt = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == '@'){
			cnt++;
		}
		else if(i != s.size() - 1){
			if(s[i] == '*' && s[i + 1] == '*'){
				break;
			}
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


