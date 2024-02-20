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
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}	

	int first = 1, second = 1;
	for(int i = 0; i < n - 1; i++){
		if(num[i] == num[i + 1]){
			first++;
		}
		else{
			break;
		}
	}
	for(int i = n - 1; i > 0; i--){
		if(num[i] == num[i - 1]){
			second++;
		}
		else{
			break;
		}
	}
	//cout << first << ' ' << second << endl;
	if(first == n && second == n){
		cout << 0 << endl;
	}
	else if(num[first - 1] == num[n - second]){
		cout << n - (first + second) << endl;
	}
	else{
		cout << n - max(first, second) << endl;
	}


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


