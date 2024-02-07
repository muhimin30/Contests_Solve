//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, m, k; cin >> n >> m >> k;

	set<int> a;
	set<int> b;
	map<int, int> a_cnt;
	map<int, int> b_cnt;

	for(int i = 0; i < n; i++){
		int temp; cin >> temp;
		if(temp <= k){	
			a.insert(temp);
		}
		
	}
	for(int i = 0; i < m; i++){
		int temp; cin >> temp;
		if(temp <= k){
			b.insert(temp);
		}
	}
	for(auto x: a){
		//cout << x << ' ';
		if(x <= k){
			a_cnt[x]++;
		}
	}
	//cout << endl;
	for(auto x: b){
		//cout << x << ' ';
		if(x <= k){
			b_cnt[x]++;
		}
	}
	//cout << endl;

	int ans_a = 0, ans_b = 0;
	vector<bool> check(k + 1);
	for(int i = 1; i <= k; i++){
		if(a_cnt[i] > 0){
			check[i] = true;
			ans_a++;
		}
		if(b_cnt[i] > 0){
			check[i] = true;
			ans_b++;
		}
	}

	// for(int i = 1; i <= k; i++){
	// 	cout << check[i] << ' ';
	// }
	// cout << endl;
	for(int i = 1; i <= k; i++){
		if(check[i] == false){
			cout << "NO" << endl;
			return;
		}
	}

	if(ans_a >= (k/2) && ans_b >= (k/2)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
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


