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
	map<int, int> freq;


	int n; cin >> n;
	vector<bool> ch(n + 1, false);

	vector<int> num(n);
	vector<int> ans(n, 1);

	for(int i = 0; i < n; i++){
		cin >> num[i];
		freq[num[i]]++;
	}

	int cnt = 0;
	bool check = false;

	vector<int> duplicate;

	for(auto a: freq){
		if(a.second > 1){
			cnt++;
			duplicate.push_back(a.first);
		}

		if(cnt >= 2){
			check = true;
			//break;
		}
	}

	if(!check){
		cout << -1 << endl;
		return;
	}


	//int cnt_p;
	vector<int> pairr;
	for(int i = 0; i < n; i++){
		if(num[i] == duplicate[0]){
			if(!ch[i]){
					pairr.push_back(i);
			}
		}


		if(pairr.size() == 2){

			if(!ch[pairr[0]] && !ch[pairr[1]]){
				ch[pairr[0]] = true;
				ch[pairr[1]] = true;
				ans[pairr[1]] = 2;
			}

			pairr.clear(); 
			break;
		}
	}

	//cout << ch[2] << endl;
	pairr.clear();

	//cout << pairr.size() << endl;
	for(int i = 0; i < n; i++){
		if(num[i] == duplicate[1]){
			if(!ch[i]){
					pairr.push_back(i);
			}
		}

		if(pairr.size() == 2){
			//cout << "Hi" << endl;


			//for(auto a: pairr) cout << a << endl;
			if(!ch[pairr[0]] && !ch[pairr[1]]){
				ch[pairr[0]] = true;
				ch[pairr[1]] = true;
				ans[pairr[1]] = 3;

			}
			pairr.clear(); 
		}
	}

	for(auto a: ans) cout << a << " ";
	cout << endl;

	


}


int main()
{
	bismillah();

	tc
	{
		solve();
	}

}


