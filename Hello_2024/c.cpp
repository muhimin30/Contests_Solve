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
	vi num(n);
	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	int cnt = 0;
	if(n == 1){

		for(int i = 0; i < n - 1; i++){
			if(num[i] < num[i + 1]) cnt++;
		}

		cout << 0 << endl;
		return;
	}

	vi num1, num2;

	num1.push_back(num[0]);
	bool check = false;
	for(int i = 1; i < n; i++){
		if(num1.back() >= num[i] && !check){
			num1.push_back(num[i]);
			continue;
		}
		else if(!check){
			num2.push_back(num[i]);
			check = true;
			continue;
		}
		if(num[i] <= num1.back() && num[i] <= num2.back()){
			if(num1.back() < num2.back()){
				num1.push_back(num[i]);
			}
			else{
				num2.push_back(num[i]);
			}
		}
		else if(num[i] <= num1.back()){
			num1.push_back(num[i]);
		}
		else if(num[i] <= num2.back()){
			num2.push_back(num[i]);
		}
		else{
			if(num1.back() < num2.back()){
				num1.push_back(num[i]);
			}
			else{
				num2.push_back(num[i]);
			}
		}
	}

	int n1 = num1.size(), n2 = num2.size();

	// for(auto a: num1) cout << a << ' ';
	// cout << endl;
	// for(auto a: num2) cout << a << ' ';
	// cout << endl;

	for(int i = 0; i < n1 - 1; i++){
		if(num1[i] < num1[i + 1]){
			cnt++;
		}
	}
	for(int i = 0; i < n2 - 1; i++){
		if(num2[i] < num2[i + 1]){
			cnt++;
		}
	}

	// if(n == 3){
	// 	if(num[0] < num[1] && num[1] < num[2]){
	// 		cout << 1 << endl;
	// 	}
	// 	else{
	// 		cout << 0 << endl;
	// 	}
	// 	return;
	// }
	cout << cnt << endl;
	//cout << endl;



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


