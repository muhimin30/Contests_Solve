//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int a, b, l; cin >> a >> b >> l;
	ll a_temp = 1, b_temp = 1;
	int a_mult = 0, b_mult = 0;

	for(int i = 0; ; i++){
		if(l % a_temp == 0){
			a_mult++ ;
		}
		if(a_temp < 0 || a_temp > l){
			break;
		}
		a_temp *= a;		

		
	}
	for(int i = 0; ; i++){
		if(l % b_temp == 0){
			b_mult++;
		}
		if(b_temp < 0 || b_temp > l){
			break;
		}
		b_temp *= b;		
		
		
	}
	// for(auto a: a_mult) cout << a << ' ';
	// cout << endl;
	
	// for(auto a: b_mult) cout << a << ' ';
	// cout << endl;

	set<int> ans;
	for(int i = 0; i <= a_mult; i++){
		for(int j = 0; j <= b_mult; j++){
			ll temp1 = round(pow(a, i));			
			ll temp2 = round(pow(b, j));
			ll mult = temp1 * temp2;
			if(mult <= l){
				if(l % mult == 0){
					ans.insert(l / mult);
				}
			}
		}
	}
	//cout << endl;
	cout << ans.size() << endl;
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


