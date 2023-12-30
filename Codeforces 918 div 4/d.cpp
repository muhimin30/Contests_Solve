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
	vector<string> ans;
	string temp;
	for(int i = 0; i < n; i++){
		temp += s[i];

		//cout << temp << endl;
		if(temp.size() == 2 && (temp[0] == 'b' || temp[0] == 'c' || temp[0] == 'd') && (temp[1] == 'a' || temp[1] == 'e')){
			ans.push_back(temp);
			temp.clear();
		}
		else if(temp.size() == 3 && (temp[0] == 'b' || temp[0] == 'c' || temp[0] == 'd') && (temp[1] == 'a' || temp[1] == 'e') && (temp[2] == 'b' || temp[2] == 'c' || temp[2] == 'd')){
			ans.push_back(temp);
			temp.clear();
		}
		else if(temp.size() == 3 && (ans.back()[0] == 'b' || ans.back()[0] == 'c' || ans.back()[0] == 'd') && (ans.back()[1] == 'a' || ans.back()[1] == 'e')){
			ans.back().push_back(temp[0]);
			temp[0] = temp[1];
			temp[1] = temp[2];
			temp.pop_back();
			if(temp.size() == 2 && (temp[0] == 'b' || temp[0] == 'c' || temp[0] == 'd') && (temp[1] == 'a' || temp[1] == 'e')){
				ans.push_back(temp);
				temp.clear();
			}
		}
	}
	if(temp.size() == 1){
		ans.back().push_back(temp[0]);
	}
	else{
		ans.push_back(temp);
	}

	string output;
	for(auto a: ans){
		if(a.size() > 0){
			output += a;
			output += ".";
		}
	}

	output.pop_back();
	cout << output << endl;
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


