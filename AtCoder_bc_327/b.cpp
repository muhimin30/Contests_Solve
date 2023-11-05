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
	ll n; cin >> n;

	for(ll i = 1; ; i++){
		if(round(powl(i, i)) == n){
			cout << i << endl;
			break;
		}

		if(round(powl(i, i)) > n){
			cout << - 1 << endl;
			break;
		}
	}

}


int main()
{
	bismillah();

	//tc
	//{
		solve();
	//}

}


