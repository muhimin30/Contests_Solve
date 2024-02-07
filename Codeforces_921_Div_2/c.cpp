//Muhimin
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(16);cout.setf(ios::fixed,ios::floatfield);
#define endl '\n';

void solve()
{
	int n, k, m; cin >> n >> k >> m;
	string s; cin >> s;

	map<char, int> mp;

	for(int i = 0; i < m; i++){
		mp[s[i]]++;
	}

	bool check = true;

	char ch = 'a';
	string ans;

	for(int i = 0; i < k; i++){
		if(mp[ch] < n){
			check = false;
			for(int i= 0; i < n; i++) ans.push_back(ch);
			break;
		}
		ch++;
	}

	if(!check){
		cout << "NO" << endl;
		cout << ans << endl;
		return;
	}

	map<char, int> mp2;
	int freq = 1;

	char nt;
	int ind;
	for(int i = 0; i < m; i++){
		mp2[s[i]]++;

		if((i + 1) % k == 0){
			ch = 'a';
			for(int j = 0; j < n; j++){
				if(mp2[ch] < freq){
					check = false;
					nt = ch;
					ind = freq;
					break;
				}
				ch++;
			}
			if(!check) break;
			freq++;
		}
		
	}
	char avail;int mx = 0;
	for(auto a: mp2){
		if(mx < a.second){
			avail = a.first;
			mx = a.second;
		}
		break;
	}
	if(!check){
		cout << "NO" << endl;
		cout << nt;

		for(int i = 1; i < n; i++){
			cout << avail;
		}
		cout << endl;
		return;
	}

	cout << "YES" << endl;


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


