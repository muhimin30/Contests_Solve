//Muhimin
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
	int n; cin >> n;
	char arr[2][n];

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}

	string ans = "";
	int r = 0, c = 0;
	ans.push_back(arr[r][c]);
	//cout << ans << endl;
	bool check = false;
	for(int i = 0; i <= n; i++){
		if(r == 1){
			check = true;
			break;
		}
		if(c == n - 1 && r == 0){
			ans.push_back(arr[r + 1][c]);
			break;
		}
		else if(c == n - 1){
			ans.push_back(arr[r][c + 1]);
			break;
		}

		if(arr[r][c + 1] <= arr[r + 1][c]){
			ans.push_back(arr[r][c + 1]);
			c++;
		}
		else{
			ans.push_back(arr[r + 1][c]);
			r++;
		}
		//cout << r << ' ' << c << endl;
	}

	if(check){
		while(ans.size() < n + 1){
			ans.push_back(arr[r][c + 1]);
			c++;
			if(c == n) break;
		}
	}
	//cout << ans << endl;
	string temp1, temp2;
	int up = 0, down = n - 1;
	for(int i = 0; i < ans.size() - 1; i++){
		if(ans[i] == arr[0][i]){
			up = i;
		}
		else{
			break;
		}
		
	}
	for(int i = ans.size() - 1, j = n - 1; i > 0, j >= 0; i--, j--){
		if(ans[i] == arr[1][j]){
			down = j;
		}
		else{
			break;
		}
		//cout << i << endl;
	}
	cout << ans << endl;
	cout << (up - down) + 1 << endl;
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


