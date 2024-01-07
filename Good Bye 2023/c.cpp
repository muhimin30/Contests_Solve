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
	int n; cin >> n;
	vi num(n + 1);
	vi ans;
	for(int i = 1; i <= n; i++){
		cin >> num[i];
	}	

	ll sum = 0;
	for(int i = 1; i <= n; i++){
		sum += 1LL * num[i];
		if(i % 2 == 1){
			ans.push_back(sum);
		}
		else{
			ans.push_back((sum / 2) * 2); 
		}
	}

	for(auto a: ans) cout << a << ' ';
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


