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
	set<int> s;
	vector<int> num;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int temp ; cin >> temp;
		s.insert(temp);
	}	
	for(auto a: s) num.push_back(a);

	int ans = 1;
	int cnt = 1;
	int ind = 0;
	for(int i = 1; i < num.size(); i++){
		int temp = num[i] - num[ind];
		if(temp < n){
			cnt++;
		}
		else{
			ind++;
		}

		ans = max(cnt, ans);
				//cout << i << ' ' << ind << ' ' << ans << endl;
	}
	// for(auto a: s) cout << a << ' ';
	// cout << endl;
	

	cout << ans << endl;
	//cout << endl;
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


