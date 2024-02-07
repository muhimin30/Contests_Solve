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
	int n, a, b; cin >> n >> a >> b;

	vi num(n);

	for(int i = 0; i < n; i++){
		cin >> num[i];
	}
	

	ll temp_sum = 0;
	sort(num.begin(), num.end());
	for(int i = 0; i < n - b; i++){
		temp_sum += 1LL * num[i];
	}
	for(int i = n - b; i < n; i++){
		temp_sum -= 1LL * num[i];
	}
	//cout << temp_sum << endl;
	ll sum = temp_sum;
	int b_ind = n - b;
	for(int i = n - 1; i >= n - a; i--){
		if(i >= b_ind){
			temp_sum += num[i];

			if(b_ind > 0){
				temp_sum -= num[b_ind - 1];
				temp_sum -= num[b_ind - 1];
				b_ind--;
			}
			
		}	
		sum = max(sum, temp_sum);	
	}

	cout << sum << endl;
	


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


