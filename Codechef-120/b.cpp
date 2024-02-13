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

	vector<int> num(n + 1);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}	

	map<int, int> ans;


	int l = 0;
	int cnt = 0;
	
	for(int i = 0; i < n; i++){
		ll sum = 0;
		for(int j = i; j < n; j++){
			sum += num[j];
			if(sum > n) break;

			ans[sum]++;
		}
			
	}
	// for(int i = 1; i <= n; i++){
	// 	if(ans.find(i) == ans.end()){
	// 		ans[i]++;
	// 	}
	// }
	//cout << cnt << endl;
	for(int i = 1; i <= n; i++){
		cout << ans[i] << ' ';
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


