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
	vector<char> ans(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	

	char ch = 'a';

	int cnt = 0;
	int sum = 0;
	int c = 0;
	while(1){
		for(int i = 0; i < n; i++){
			if(num[i] == cnt){
				ans[i] = ch;
				cnt++;
				num[i] = -1;
				sum++;
			}
		}

		if(sum == n){
			break;
		}

		cnt = 0;
		ch++;
	}


	for(auto a: ans) cout << a;
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


