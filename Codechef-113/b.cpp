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
	int n ; cin >> n;

	vector<int> num(n);


	for(int i = 0; i < n; i++){
		cin >> num[i];
	}

	int one_cnt = 0, zero_cnt = 0;
	for(int i = 0; i < n; i++){
		if(num[i] == 0){
			zero_cnt++;
		}
		else{
			one_cnt++;
		}
	}

	cout << min(one_cnt, zero_cnt) << endl;	


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


