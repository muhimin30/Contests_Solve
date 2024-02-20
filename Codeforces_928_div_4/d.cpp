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
	vector<int> num(n);

	map<int, int> freq;

	//cout << (3 ^ 5	) << endl;
	int mx = 2147483647;
	int ans = 0;
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}		
	//for(auto a: num) cout << a << ' ';
	//cout << endl;
	for(int i = 0; i < n; i++){
		int temp = ((mx ^ num[i]));
		//cout << ((mx ^ num[i])) << endl;
		if(freq[num[i]]){
			//freq[num[i]]++;
			freq[num[i]]--;
		}
		else{
			ans++;
			freq[temp]++;
		}
		//for(auto a: freq) cout << a.first << ' ' << a.second << endl;
		//cout << ans << endl;
		// << endl;
	}

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


