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
		string s; cin >> s;

		vector<pair<int, char>> upper;
		vector<pair<int, char>> lower;

		for(int i = 0; i < s.size(); i++){
			if(s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b'){
				lower.push_back({i, s[i]});
			}
			else if(s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B'){
				upper.push_back({i, s[i]});
			}
			else if(lower.size() > 0 && s[i] == 'b'){
				lower.pop_back();
			}
			else if(upper.size() > 0 && s[i] == 'B'){
				upper.pop_back();
			}
		}
		
		vector<pair<int, char>> ans;

		for(int i = 0; i < upper.size(); i++){
			ans.push_back({upper[i].first, upper[i].second});
		}

		for(int i = 0; i < lower.size(); i++){
			ans.push_back({lower[i].first, lower[i].second});
		}
		
		sort(all(ans));


		for(auto a: ans) cout << a.second;
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


