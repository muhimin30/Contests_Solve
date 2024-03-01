//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n; cin >> n;
	ll ans = 0;
	for(int i = 0; i < 35; i++){
		if((1 << i) > n){
			break;
		}
		else{
			ans = 1 << i;
		}
	}

	cout << ans << endl;
}


int main()
{
 ios_base::sync_with_stdio(0);
 cin.tie(0);

 int t = 1;
 cin >> t;
 while(t--){
		solve();
 }

}


