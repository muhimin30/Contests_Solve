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
	int x = n;
	vector<int> num(n);

	num[0] = n;
	n--;

	for(int i = 1; i < x; i++){
		if(i % 2 == 1){
			num[i] = (i / 2) + 1;
		}
		else{
			num[i] = n;
			n--;
		}
	}
	//n = x;
	//reverse(num.begin(), num.end());
	//cout << x << endl;
	// for(int i = 0; i < n-2; i++){
	// 	for(int j = i + 1; j < n - 1; j++){
	// 		if(num[i] % num[j] == 0 && num[i + 1] % num[j + 1] == 0){
	// 			cout << i << ' ' << j << endl;
	// 			cout << "HI" << endl;
	// 			break;
	// 		}
	// 	}
	// }
	for(auto a: num) cout << a << ' ';
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
