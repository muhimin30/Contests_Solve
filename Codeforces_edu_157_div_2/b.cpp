#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)

void solve()
{
	int n; cin >> n;
	vi num(2*n);
	for(int i = 0; i < 2 * n; i++){
		cin >> num[i];
	}
	sort(allr(num));
	vector<pii> points(n);

	for(int i = 0; i < n; i++){
		points[i].first = num[i];
	}
	for(int i = 0; i < n; i++){
		points[i].second = num[i + n];
	}

	ll dist = 0;
	for(int i = 0; i < n - 1; i++){
		dist += 1LL *  abs(points[i].first - points[i + 1].first) +  abs(points[i].second - points[i + 1].second);
	}

	cout << dist << endl;

	for(auto a: points) cout << a.first << ' ' << a.second << endl;

}


int main()
{
	bismillah();

	tc
	{
		solve();
	}

}


