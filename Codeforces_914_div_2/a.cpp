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
		int a, b; cin >> a >> b;

		int xk, yk; cin >> xk >> yk;

		int xq, yq; cin >> xq >> yq;

		vector<pair<int, int>> king;
		vector<pair<int, int>> queen;

		king.push_back({xk + a, yk + b});
		king.push_back({xk - a, yk + b});
		king.push_back({xk + a, yk - b});
		king.push_back({xk - a, yk - b});
		king.push_back({xk + b, yk + a});
		king.push_back({xk + b, yk - a});
		king.push_back({xk - b, yk + a});
		king.push_back({xk - b, yk - a});
		

		queen.push_back({xq + a, yq + b});
		queen.push_back({xq - a, yq + b});
		queen.push_back({xq + a, yq - b});
		queen.push_back({xq - a, yq - b});
		queen.push_back({xq + b, yq + a});
		queen.push_back({xq + b, yq - a});
		queen.push_back({xq - b, yq + a});
		queen.push_back({xq - b, yq - a});

		sort(all(king));
		sort(all(queen));

		int x = unique(all(king)) - king.begin();
		int y = unique(all(queen)) - queen.begin();

		// for(auto a: king) cout << a.first << ' ' << a.second << endl;
		// cout << endl;
		// for(auto a: queen) cout << a.first << ' ' << a.second << endl;

		int cnt = 0;
		for(int i = 0; i < x; i++){
			for(int j = 0; j < y; j++){
				if(king[i].first == queen[j].first && king[i].second == queen[j].second){
					cnt++;
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


