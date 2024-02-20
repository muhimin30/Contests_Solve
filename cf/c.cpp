//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, x; cin >> n >> x;
	deque<int> num;
	vector<int> val;

	ll mod = 1;
	for(int i = 0; i < n; i++){
		int temp;cin >> temp;
		num.push_back(temp);
		val.push_back(temp);
	}
	vector<int> ans;
	string s; cin >> s;
	string s1 = s;
	reverse(s.begin(), s.end());
	int l = 0, r = n - 1;
	while(s.size() > 1){
		if(s.back() == 'L'){
			l++;
		}
		s.pop_back();
	}
	vector<int> ans;

	int temp = s[l] % x;
	ans.push_back(temp);
	ans.pop_back();
	while(!s1.empty()){

	}
	cout << l << endl;
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


