#include <bits/stdc++.h>
using namespace std;


typedef vector<int> vi;
typedef vector<long long> vii;
typedef pair<int,int> pii;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)

void solve()
{
	
	int n; cin >> n;

	string s; cin >> s;

	int a_cnt = 0, b_cnt = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'A'){
			a_cnt++;
		}
		else if(s[i] == 'B'){
			b_cnt++;
		}
	}

	//cout << a_cnt << " " << b_cnt << endl;

	cout << s[n - 1] << endl;

}


int main()
{
	bismillah();

	tc
	{
		solve();
	}

}


