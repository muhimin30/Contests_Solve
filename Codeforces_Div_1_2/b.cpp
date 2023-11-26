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
	string s; cin >> s;

	int cnt = 0;
	int b_cnt = 0;
	for(int i = n - 1; i >= 0; i--){
		if(s[i] == 'B'){
			b_cnt++;
		}
		else{
			
			if(b_cnt > 0){
				cnt += b_cnt;
				s[i] = 'B';
				b_cnt = 0;
				i++;
			}
			
		}
	}

	cout << cnt << endl;
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


