//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

const int N = 2e5 + 23;
vector<ll> ans(N);
ll sum_s(int x){
	string s = to_string(x);

	ll temp = 0;
	for(int i = 0; i < s.size();i++){
		temp += s[i] - '0';
	}
	//cout << x << ' ' << temp << endl;
	return temp;
}

void solve()
{
	int n; cin >> n;
	cout << ans[n] << endl;
}


int main()
{
	bismillah();

	int t = 1;
	ll sum = 0;
	for(int i = 1; i <= 2e5; i++){
		sum += sum_s(i);
		ans[i] = sum;
	}

	cin >> t;	

	while(t--){
		solve();
	}

}


