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
	string s1, s2; cin >> s1 >> s2;

	int position = 0, total_need = 0, available = 0;

	for(int i = 0; i < n; i++){
		if(s1[i] == '1') available++;
		if(s2[i] == '1') total_need++;

		if(s1[i] == s2[i] && s1[i] == '1') position++;
	}

	int ans = 0;
	//cout << total_need << ' ' << available << ' ' << position << endl;

	int temp = min(available, total_need);
	ans += abs(total_need - available);

	ans -= position - temp;
	cout << ans << endl;

	


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


